#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>
#include <iostream>


class Solution {
public:
  int current;
  std::vector<int> vec;
  void firstelement();
  void lastelement();
  void currentelement();
  void ithfromcurrentelement(int i);
  void print();
  int fib(int N);
  private:
  std::map<int, int> _m;
};


#endif