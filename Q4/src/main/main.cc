#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution s;
  std::cout <<"result: "<< s.CheckInput("(a+b)")<< std::endl;
  std::cout <<"result: "<< s.CheckInput("(a+b)[c*d]{5g+h}")<< std::endl;
  std::cout <<"result: "<< s.CheckInput("(a+b]")<< std::endl;
  std::cout <<"result: "<< s.CheckInput("(7h+[5c)+7]")<< std::endl;
  std::cout <<"result: "<< s.CheckInput("{2k+[5j]}")<< std::endl;
  std::cout <<"result: "<< s.CheckInput("{2k++[5--*j]}")<< std::endl;
  std::cout <<"result: "<< s.CheckInput("(a * [ c - { d + b }])")<< std::endl;
  std::cout <<"result: "<< s.CheckInput(")(dffn{df{df]efdf{]")<< std::endl;
  return EXIT_SUCCESS;
}

