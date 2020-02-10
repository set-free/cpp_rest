#include <iostream>

#include "cpr/include/cpr/cpr.h"

int main(int argc, char *argv[]) {
  std::cout << argc << " :: " << argv << std::endl;
  std::string url = "https://ya.ru";

  auto r = cpr::Get(cpr::Url{"http://google.ru/"});

  std::cout << "Response from url: " << r.url << std::endl;
  std::cout << "Response status code: " << r.status_code << std::endl;
  std::cout << "Response headers [date]: " << r.header["date"] << std::endl;
  std::cout << "Response headers [content-type]: " << r.header["content-type"]
            << std::endl;
  std::cout << "Response text: " << r.text << std::endl;
  return 0;
}
