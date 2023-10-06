#ifndef _LOGGER_H_
#define _LOGGER_H_

#include "util/singleton.h"
#include <fstream>
#include <iostream>
#include <time.h>

#pragma warning(disable : 4996)

namespace ceerpc {

class Logger : public Singleton<Logger> {
public:
  enum log_level { kDEBUG, kINFO, kWARNING, kERROR };        // 日志等级
  enum log_target { kFile, kTerminal, kFile_and_terminal }; // 日志输出目标
public:
  Logger();
  Logger(log_target target, log_level level, const std::string &path);
  ~Logger();

  static void DEBUG(const std::string &text);
  static void INFO(const std::string &text);
  static void WARNING(const std::string &text);
  static void ERRORS(const std::string &text);

private:
  std::ofstream outfile_; // 将日志输出到文件的流对象
  log_target target_;     // 日志输出目标
  std::string log_path_;      // 日志文件路径
  log_level level_;       // 日志等级
  std::mutex mtx_;
  void output(const std::string &text, log_level act_level); // 输出行为
};


#endif //_LOGGER_H_

}