#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(AcademicRecord, ReturnAcademicRecord1) {
  AcademicRecord actual(80,80,80),expected(100,100,100);
  actual++;
  actual++;
  actual++;
  EXPECT_EQ(expected.Maths, actual.Maths);
  EXPECT_EQ(expected.Science, actual.Science);
  EXPECT_EQ(expected.Physics, actual.Physics);
}
TEST(AcademicRecord, ReturnAcademicRecord2) {
  AcademicRecord actual(20,20,20),expected(0,0,0);
  actual--;
  actual--;
  EXPECT_EQ(expected.Maths, actual.Maths);
  EXPECT_EQ(expected.Science, actual.Science);
  EXPECT_EQ(expected.Physics, actual.Physics);
}
TEST(AcademicRecord, ReturnAcademicRecord3) {
  AcademicRecord actual(80,80,80),expected(90,90,90);
  actual++;
  EXPECT_EQ(expected.Maths, actual.Maths);
  EXPECT_EQ(expected.Science, actual.Science);
  EXPECT_EQ(expected.Physics, actual.Physics);
}
TEST(AcademicRecord, ReturnAcademicRecord4) {
  AcademicRecord actual(60,60,60),expected(40,40,40);
  actual--;
  EXPECT_EQ(expected.Maths, actual.Maths);
  EXPECT_EQ(expected.Science, actual.Science);
  EXPECT_EQ(expected.Physics, actual.Physics);
}
TEST(AcademicRecord, ReturnAcademicRecord5) {
  AcademicRecord actual(50,50,50),expected(90,90,90);
  actual+=40;
  EXPECT_EQ(expected.Maths, actual.Maths);
  EXPECT_EQ(expected.Science, actual.Science);
  EXPECT_EQ(expected.Physics, actual.Physics);
}
TEST(AcademicRecord, ReturnAcademicRecord6) {
  AcademicRecord actual(50,50,50),expected(40,40,40);
  actual-=10;
  EXPECT_EQ(expected.Maths, actual.Maths);
  EXPECT_EQ(expected.Science, actual.Science);
  EXPECT_EQ(expected.Physics, actual.Physics);
}
TEST(AcademicRecord, ReturnAcademicRecord7) {
  AcademicRecord actual(50,50,50),expected(40,40,40);
  actual-=10;
  EXPECT_EQ((actual==expected), true);
}
TEST(AcademicRecord, ReturnAcademicRecord8) {
  AcademicRecord actual,expected(40,40,40);
  actual=expected;
  EXPECT_EQ((actual==expected), true);
}