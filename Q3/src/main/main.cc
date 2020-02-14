#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution s;
  SinglyLinkedList l;
  SinglyLinkedList l1({},6);
  SinglyLinkedList l2({1,2,3,4,5,6,7},-1);
  SinglyLinkedList l3({1,2,3,4},6);
  //SinglyLinkedList l4({1,2,3,4,5,6},3);
  l.print();
  std::cout<<l.empty()<<' '<<l.size()<<std::endl;
  l1.print();
  l1.push_back(5);
  l1.print();
  l1.push_front(10);
  l1.print();
  l1.insert_after(l1.head_,100);
  l1.print();
  l1.erase(l1.head_);
  l1.print();
  std::cout<<l1.empty()<<' '<<l1.size()<<std::endl;
  l2.print();
  l2.pop_front();
  l2.print();
  l2.pop_back();
  l2.print();
  std::cout<<l2.empty()<<' '<<l2.size()<<std::endl<<l2.front()<<'-'<<l2.back()<<std::endl;
  l3.print();
  std::cout<<l3.print_t()<<std::endl;
  std::cout<<l3.empty()<<' '<<l3.size()<<std::endl;
  return EXIT_SUCCESS;
}