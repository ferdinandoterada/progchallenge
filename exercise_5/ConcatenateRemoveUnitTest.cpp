#include "ConcatenateRemove.cpp"
#include <gtest/gtest.h>

TEST(ConcatenateRemoveTest, Success)
{
    EXPECT_EQ(ConcatRemove("teste", "teste1", 10), "yes");
    EXPECT_EQ(ConcatRemove("teste1", "teste", 10), "yes");
    EXPECT_EQ(ConcatRemove("asdf", "fdsa", 10), "yes");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

