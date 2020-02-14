#include "solution.h"


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


void Solution::firstelement(){
  current=1;
  std::vector<int>::iterator it;
  it=vec.begin();
  std::cout<<"Output: "<<*it<<std::endl;
}
void Solution::lastelement(){
  current=vec.size();
  std::vector<int>::iterator it;
  it=vec.end()-1;
  std::cout<<"Output: "<<*it<<std::endl;
}
void Solution::currentelement(){
  std::vector<int>::iterator it;
  it=vec.begin()+current-1;
  std::cout<<"Output: "<<*it<<std::endl;
}
void Solution::ithfromcurrentelement(int i){
  std::vector<int>::iterator it;
  if(i<0){
    std::cout<<"Value of i cannot be negative"<<std::endl;
  }
  else if(vec.size()<(current+i)){
    std::cout<<"Sorry! You cannot traverse "<<i<<" elements from your current location."<<std::endl;
  }
  else{
    current=current+i;
    it=vec.begin()+current-1;
    std::cout<<"Output: "<<*it<<std::endl;
  }
}

void Solution::print(){
  std::cout<<"Vector: ";
  for(auto it=vec.begin(); it<vec.end(); it++){
    if(it!=vec.end()-1){
      std::cout<<*it<<", ";
    }
    else{
      std::cout<<*it;
    }
  }
  std::cout<<std::endl;
}