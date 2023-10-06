#include "util/logger.h"
#include <cstdio>
#include <mutex>
#include <sstream>
#include <string>

namespace ceerpc {

std::string currTime() {
  // 获取当前时间，并规范表示
  char tmp[64];
  time_t ptime;
  time(&ptime); // time_t time (time_t* timer);
  strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S", localtime(&ptime));
  return tmp;
}

// 默认构造函数
#ifdef CEERPC_DEBUG
Logger::Logger()
    : m_target(kFile_and_terminal), m_level(kDEBUG), m_path("Log.log") {
#else
Logger::Logger()
    : target_(kFile_and_terminal), level_(kINFO), log_path_("Log.log") {
#endif
  std::ostringstream str_content;
  str_content << currTime() << " : === Start logging ===\n";
  if (target_ != kTerminal) {
    outfile_.open(log_path_, std::ios::out | std::ios::app); // 打开输出文件
    outfile_ << str_content.str();
  }
  if (target_ != kFile) {
    // 如果日志对象不是仅文件
    std::cout << str_content.str();
  }
}

Logger::Logger(log_target target, log_level level, const std::string &path) {
  target_ = target;
  log_path_ = path;
  level_ = level;

  std::ostringstream str_content;
  str_content << currTime() << " : === Start logging ===\n";
  if (target != kTerminal) {
    outfile_.open(path, std::ios::out | std::ios::app); // 打开输出文件
    outfile_ << str_content.str();
  }
  if (target != kFile) {
    // 如果日志对象不是仅文件
    std::cout << str_content.str();
  }
}

Logger::~Logger() {
  std::string strContent = currTime() + " : " + "=== End logging ===\r\n";
  if (outfile_.is_open()) {
    outfile_ << strContent;
  }
  outfile_.flush();
  outfile_.close();
}

void Logger::DEBUG(const std::string &text) {
  get_instance().output(text, kDEBUG);
}

void Logger::INFO(const std::string &text) {
  get_instance().output(text, kINFO);
}

void Logger::WARNING(const std::string &text) {
  get_instance().output(text, kWARNING);
}

void Logger::ERRORS(const std::string &text) {
  get_instance().output(text, kERROR);
}

void Logger::output(const std::string &text, log_level act_level) {
  std::lock_guard<std::mutex> lock(mtx_);
  std::string prefix;
  if (act_level == kDEBUG)
    prefix = "[DEBUG] ";
  else if (act_level == kINFO)
    prefix = "[INFO] ";
  else if (act_level == kWARNING)
    prefix = "[WARNING] ";
  else if (act_level == kERROR)
    prefix = "[ERROR] ";
  // else prefix = "";
  // prefix += __FILE__;
  // prefix += " ";
  std::ostringstream output_content;
  output_content << prefix << currTime() << ":" << text << std::endl;
  if (level_ <= act_level && target_ != kFile) {
    // 当前等级设定的等级才会显示在终端，且不能是只文件模式
    std::cout << output_content.str();
  }
  if (target_ != kTerminal)
    outfile_ << output_content.str();

  outfile_.flush(); // 刷新缓冲区
}
} // namespace ceerpc