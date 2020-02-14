#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution s;
 
  std::cout << s.PrintHelloWorld() << std::endl;

  int r = s.fib(10);
  int j = s.fib(12);
  std::cout << "r: " << r << std::endl;

  for(const auto &n: s.CheckSum({3,7,11,15},10)){
    std::cout<<n<<' ';
  }
   std::cout<<std::endl;
  for(const auto &n: s.CheckSum({3,7,11,15},180)){
    std::cout<<n<<' ';
  }
   std::cout<<std::endl;
  for(const auto &n: s.CheckSum({1,4,3,2},3)){
    std::cout<<n<<' ';
  }
   std::cout<<std::endl;
  return EXIT_SUCCESS;
}