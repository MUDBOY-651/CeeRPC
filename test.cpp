#include <sstream>
#include <iostream>
#include <string>

int main() {
  std::string a = "a";
  std::string b = "b";
  std::string c = "c";

  std::ostringstream output_content;
  output_content << a << ":" << b << std::endl;
  std::cout << output_content.str() << "\n";
}