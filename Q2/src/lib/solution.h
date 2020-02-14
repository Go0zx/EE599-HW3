#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>

class Solution {
public:
  std::string PrintHelloWorld();
  std::vector<int> CheckSum(std::vector<int> vec, int sum);
  int fib(int N);
  private:
  std::map<int, int> _m;
};

#endif