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

  bool Solution::CheckInput(std::string s){
    std::stack<char> temp;
    char first,second;
    if(s.empty()) return true;
    for(auto n: s){
      temp.push(n);
    }
    while(!temp.empty()){
      first=temp.top();
      temp.pop();
      // std::cout<<"f : "<<first<<std::endl;
      switch(first){
        case ')': {
                    while(second!='['&&second!=']'&&second!='{'&&second!='}'){
                      if(temp.empty()) return false;
                      second=temp.top();
                      if(second!='}'&&second!=']')temp.pop();
                      if(second=='(') return true;
                    }
                    break;
                  }
        case ']': {
                    while(second!='('&&second!=')'&&second!='{'&&second!='}'){
                      if(temp.empty()) return false;
                      second=temp.top();
                      // std::cout<<"s : "<<second<<std::endl;
                      if(second!=')'&&second!='}')temp.pop();
                      if(second=='[') return true;
                    } 
                     break;
                  }
        case '}': {
                    while(second!='['&&second!=']'&&second!='('&&second!=')'){
                      if(temp.empty()) return false;
                      second=temp.top();
                      if(second!=')'&&second!=']')temp.pop();
                      if(second=='{') return true;
                    }        
                     break;
                  }
      }
    }
    return false;
  }


