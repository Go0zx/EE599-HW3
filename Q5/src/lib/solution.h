#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>

class Solution {
public:
  std::string PrintHelloWorld();
  int fib(int N);
  private:
  std::map<int, int> _m;
};

class AcademicRecord{
public:
  int Maths;
  int Science;
  int Physics;
  AcademicRecord():Maths(0),Science(0),Physics(0){}
  AcademicRecord(int x,int y, int z):Maths(x),Science(y),Physics(z){Check();}
  AcademicRecord(const AcademicRecord &s){
    Maths=s.Maths;
    Science=s.Science;
    Physics=s.Physics;
  }
  AcademicRecord operator++(int){
    Maths+=10;
    Science+=10;
    Physics+=10;
    Check();
    return *this;
  }
  AcademicRecord operator--(int){
    Maths-=20;
    Science-=20;
    Physics-=20;
    Check();
    return *this;
  }
  AcademicRecord operator+=(int i){
    Maths+=i;
    Science+=i;
    Physics+=i;
    Check();
    return *this;
  }
  AcademicRecord operator-=(int i){
    Maths-=i;
    Science-=i;
    Physics-=i;
    Check();
    return *this;
  }
  bool operator==(const AcademicRecord &s){
    return((Maths==s.Maths)&&(Science==s.Science)&&(Physics==s.Physics));
  }
  void Check(){
    if(Maths>100) Maths=100;
    else if(Maths<0) Maths=0;
    if(Science>100) Science=100;
    else if(Science<0) Science=0;
    if(Physics>100) Physics=100;
    else if(Physics<0) Physics=0;
  }
  std::string print(){
    std::string s;
    s="\nMaths::"+std::to_string(Maths)+"\nscience::"+std::to_string(Science)+"\nPhysics::"+std::to_string(Physics);
    return s;
  }
};
#endif