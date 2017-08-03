#include <gtest/gtest.h>

TEST(sampletest, first_test) { ASSERT_EQ(1, 1); }

TEST(sampletest, asset_true_test) {
  int a = 0;
  for (int i = 0; i < 10; i++) {
    a++;
  }
  ASSERT_TRUE(a > 5);
}

TEST(sampletest, string_eq_test) {
  std::string str1 = "abc";
  std::string str2 = "def";
  ASSERT_NE(str1, str2);
}

bool hoge(int n) { return n > 5 ? true : false; }

TEST(sampletest, pred_test) {
  int a = 9;
  int b = 6;
  ASSERT_PRED1(hoge, a);
  ASSERT_PRED1(hoge, b);
}

TEST(hogetest, test) {
  int a = 0;
  a *= 2;
  EXPECT_EQ(a, 0);
}
