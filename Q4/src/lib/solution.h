#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>
#include <stack>
#include <iostream>

class Solution {
public:
  std::string PrintHelloWorld();
  int fib(int N);
  bool CheckInput(std::string s);
  private:
  std::map<int, int> _m;
};

#endif