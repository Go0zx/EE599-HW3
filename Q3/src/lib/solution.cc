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

  bool SinglyLinkedList::empty(){
    return(head_->val==-1);
  }
  int SinglyLinkedList::size(){
    int size=0;
    ListNode *temp;
    temp=head_;
    if(empty()==1) return size;
    while(temp!=nullptr){
      size++;
      temp=temp->next;
    }
    return size;
  }
  void SinglyLinkedList::push_back(int i){
    ListNode *tail;
    tail=head_;
    if(empty()==1){
      head_=new ListNode(i);
    }
    else{
      while(tail->next!=nullptr){
        tail=tail->next;
      }
      tail->next=new ListNode(i);
    }
  }
  void SinglyLinkedList::push_front(int i){
    ListNode *temp;
    temp=head_;
    head_=new ListNode(i);
    head_->next=temp;

  }
  void SinglyLinkedList::insert_after(ListNode* p, int i){
    ListNode *temp;
    temp=new ListNode(i);
    temp->next=p->next;
    p->next=temp;
  }
  void SinglyLinkedList::erase(ListNode* p){
    ListNode *temp;
    temp=head_;
    if(p!=head_){
      while(temp->next!=p){
        temp=temp->next;
      }
      temp->next=p->next;
    }
    else{
      head_=head_->next;
    }
  }
  void SinglyLinkedList::pop_front(){
    head_=head_->next;
  }
  void SinglyLinkedList::pop_back(){
    ListNode *temp;
    temp=head_;
    while(temp->next->next!=nullptr){
      temp=temp->next;
    }
    temp->next=nullptr;
  }
  int SinglyLinkedList::back(){
    ListNode *temp;
    temp=head_;
    while(temp->next!=nullptr){
      temp=temp->next;
    }
    return temp->val;
  }
  int SinglyLinkedList::front(){
    return head_->val;
  }
  ListNode *SinglyLinkedList::GetBackpointer(){
    ListNode *temp;
    temp=head_;
    while(temp->next!=nullptr){
      temp=temp->next;
    }
    return temp;
  }
  ListNode *SinglyLinkedList::GetIthpointer(int i){
    ListNode *temp;
    temp=head_;
    int j=1;
    while((temp->next!=nullptr) && (j!=i)){
      temp=temp->next;
      j++;
    }
    return temp;
  }
  void SinglyLinkedList::print(){
    ListNode *temp;
    temp=head_;
    while(temp!=nullptr){
      std::cout<<temp->val<<' ';
      temp=temp->next;
    }
    std::cout<<std::endl;
  }
  std::string SinglyLinkedList::print_t(){
    ListNode *temp;
    std::string s;
    temp=head_;
    while(temp!=nullptr){
      s=s+std::to_string(temp->val)+' ';
      temp=temp->next;
    }
    return s;
  }

