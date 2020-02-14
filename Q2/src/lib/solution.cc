#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

// Calculates the Nth Fibonacci number
int Solution::fib(int N) {
    if (N == 0) {
      return 0;
    }

    if (N == 1) {
      return 1;
    }

    if (_m.count(N)) {
      return _m[N];
    } else {
      _m[N] = fib(N - 1) + fib(N - 2);
      return _m[N];
    }
  }

  std::vector<int> Solution::CheckSum(std::vector<int> vec, int sum){
    std::map<int,int> temp;
    int i=0;
    for(const auto &n: vec){
      temp[n]= i;
      auto it = temp.find(sum-n);
      if(it!=temp.end() && it->first!=n){
        return {it->second,i};
      }
      i++;
    }
    return {};
  }


