#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution s;
  int option=0,i=0;
  s.vec={1, 4, 5, 23, 100, 12, 18, 175};
  while(option!=5){
    std::cout<<"************************************************"<<std::endl;
    s.print();
    std::cout<<"************************************************"<<std::endl;
    std::cout<<"Please choose any of the following options: "<<std::endl;
    std::cout<<"1. What is the first element?"<<std::endl;
    std::cout<<"2. What is the last element?"<<std::endl;
    std::cout<<"3. What is the current element?"<<std::endl;
    std::cout<<"4. What is the ith element from the current location?"<<std::endl;
    std::cout<<"5. Exit."<<std::endl;
    std::cout<<"************************************************"<<std::endl;
    std::cout<<"Input option: ";
    std::cin>>option;
    switch(option){
      case 1: s.firstelement();
              break;
      case 2: s.lastelement();
              break;
      case 3: s.currentelement();
              break;
      case 4: {
              std::cout<<"Enter the value of i: ";
              std::cin>>i;
              s.ithfromcurrentelement(i);
              break;
              }
      case 5:{std::cout<<"Exit......"<<std::endl;}
      default:{}
    }
    std::cout<<std::endl;
  }
  return EXIT_SUCCESS;
}