#include "gtest/gtest.h"

int factorial(int n)
{
    if(n < 1)
    	return 1;
    else
        return n * factorial(n-1);
}

TEST(FactorialTest, FactorialOfZeroShouldBeOne)
{
    ASSERT_EQ(1, factorial(0));
}

TEST(FactorialTest, FactorialOfPositiveNos)
{
    ASSERT_EQ(1, factorial(1));
    ASSERT_EQ(24, factorial(4));
    ASSERT_EQ(120, factorial(5));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

