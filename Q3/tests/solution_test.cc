#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SinglyLinkedList, ReturnSinglyLinkedList){
  SinglyLinkedList Sactual({1,2,3,4},6), Sexpected({1,2,3,4},-1);
  std::string actual=Sactual.print_t();
  std::string expected=Sexpected.print_t();
  EXPECT_EQ(expected, actual);
}

TEST(empty, Returnempty){
  SinglyLinkedList actual;
  EXPECT_EQ(true, actual.empty());
}

TEST(size, Returnsize){
  SinglyLinkedList actual({1,2,3,4},6);
  EXPECT_EQ(4, actual.size());
}

TEST(push_back, Returnpush_back){
  SinglyLinkedList Sactual({1,2,3,4},6), Sexpected({1,2,3,4,5},-1);
  Sactual.push_back(5);
  std::string actual=Sactual.print_t();
  std::string expected=Sexpected.print_t();
  EXPECT_EQ(expected, actual);
}
  
TEST(push_front, Returnpush_front){
  SinglyLinkedList Sactual({1,2,3,4},6), Sexpected({0,1,2,3,4},-1);
  Sactual.push_front(0);
  std::string actual=Sactual.print_t();
  std::string expected=Sexpected.print_t();
  EXPECT_EQ(expected, actual);
}

TEST(insert_after, Returninsert_after){
  SinglyLinkedList Sactual({1,2,3,4},6), Sexpected({1,6,2,3,4},-1);
  Sactual.insert_after(Sactual.head_,6);
  std::string actual=Sactual.print_t();
  std::string expected=Sexpected.print_t();
  EXPECT_EQ(expected, actual);
}

TEST(erase, Returnerase){
  SinglyLinkedList Sactual({1,2,3,4},6), Sexpected({2,3,4},-1);
  Sactual.erase(Sactual.head_);
  std::string actual=Sactual.print_t();
  std::string expected=Sexpected.print_t();
  EXPECT_EQ(expected, actual);
}

TEST(pop_front, Returnpop_front){
  SinglyLinkedList Sactual({1,2,3,4},6), Sexpected({2,3,4},-1);
  Sactual.pop_front();
  std::string actual=Sactual.print_t();
  std::string expected=Sexpected.print_t();
  EXPECT_EQ(expected, actual);
}

TEST(pop_back, Returnpop_back){
  SinglyLinkedList Sactual({1,2,3,4},6), Sexpected({1,2,3},-1);
  Sactual.pop_back();
  std::string actual=Sactual.print_t();
  std::string expected=Sexpected.print_t();
  EXPECT_EQ(expected, actual);
}

TEST(back, Returnback){
  SinglyLinkedList actual({1,2,3,4},6);
  EXPECT_EQ(4, actual.back());
}

TEST(front, Returnfront){
  SinglyLinkedList actual({1,2,3,4},6);
  EXPECT_EQ(1, actual.front());
}

