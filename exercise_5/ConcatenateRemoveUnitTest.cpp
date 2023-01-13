#include "ConcatenateRemove.cpp"
#include <gtest/gtest.h>

TEST(ConcatenateRemoveTest, SuccessCase)
{
    EXPECT_EQ(ConcatRemove("teste", "teste1", 10), "yes");
    EXPECT_EQ(ConcatRemove("teste1", "teste", 10), "yes");
    EXPECT_EQ(ConcatRemove("asdf", "fdsa", 10), "yes");
}

TEST(ConcatenateRemoveTest, FailureCase)
{
    EXPECT_EQ(ConcatRemove("abcdef", "ghi", 1), "no");
    EXPECT_EQ(ConcatRemove("ghi", "abcdef", 4), "no");
    EXPECT_EQ(ConcatRemove("asdf", "fdsa", 3), "no");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

