#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution s;
  AcademicRecord obj1, obj2; 
  obj1.Maths = 5; obj1.Science = 10; obj1.Physics = 95;
  std::cout<< "Value before incrementation ::"<< obj1.print() << std::endl; 
  obj1++;
  std::cout<< "Value after incrementation ::"<< obj1.print() << std::endl; 
  obj1--;
  std::cout<< "Value after decrementation ::"<< obj1.print() << std::endl; 
  obj2=obj1;
  std::cout<< "Value of Object 2::" << obj2.print() << std::endl; 
  obj2+=50;
  std::cout<< "Value of Object 2 after increasing marks by 50 for each subject::" << obj2.print() << std::endl;
  obj2-=30;
  std::cout<< "Value of Object 2 after decreasing marks by 30 for each subject::" << obj2.print() << std::endl;
  
  return EXIT_SUCCESS;
}