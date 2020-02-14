#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>
#include <iostream>


class Solution {
public:
  std::string PrintHelloWorld();
  int fib(int N);
  private:
  std::map<int, int> _m;
};


struct ListNode{
  int val;
  ListNode *next;
  ListNode (int x):val(x),next(nullptr){}
};

class SinglyLinkedList{
  public:
// ​default constructor 
  SinglyLinkedList(){ head_=new ListNode(-1);} 
// Creates a linked list out of vector “inputs” and connects the last
// item’s next to i(th) item in the list.
// - If i is -1, the last item’s next is nullptr.
// - If i is greater than input size, the last item’s next is nullptr.
  SinglyLinkedList(const std::vector<int> &inputs, int i){
    if(inputs.size()==0){
      head_=new ListNode(-1);
    }
    else{
      ListNode *node[inputs.size()];    
      for(int j=0; j<inputs.size(); j++){
        node[j]=new ListNode(inputs.at(j));
      }
      head_=node[0];
      for(int j=1; j<inputs.size(); j++){
        node[j-1]->next=node[j];
      }
      if((i!=-1)&&(i<inputs.size())){
        node[inputs.size()-1]->next=node[i-1];
      }
    }
    
  }
  ~SinglyLinkedList(){head_=nullptr;} // destructor, cleans up
  bool empty();
  int size();
  void push_back(int i);
  void push_front(int i);
  void insert_after(ListNode* p, int i);
  void erase(ListNode* p);
  void pop_front();
  void pop_back();
  int back();
  int front();
  ListNode *GetBackpointer();
  ListNode *GetIthpointer(int i);
  void print();
  std::string print_t();
  ListNode *head_;
// Returns pointer to i(th) element ListNode​ ​*​GetIthPointer​(​int​ ​i​);
// Prints the list: ex. Empty list: {}. List with items: {1, 2, 3} void​ ​print​();
 // Pointer to the first element
};
#endif