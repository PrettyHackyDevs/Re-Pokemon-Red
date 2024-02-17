#include <limits.h>
#include "gtest/gtest.h"


int Factorial(int n) {
    //For negative n, n! is defined to be 1.
    int result = 1;
    for (int i = 1; i <= n; i++) {
    result *= i;
    }

    return result;
}

bool IsPrime(int n) {
    if (n <= 1) return false;
    if (n % 2 == 0) return n == 2;
    for (int i = 3;; i += 2) {
        if (i > n / i) break;
        if (n % i == 0) return false;
    }
    return true;
}

namespace {

TEST(FactorialTest, Negative) {
    EXPECT_EQ(1, Factorial(-5));
    EXPECT_EQ(1, Factorial(-1));
    EXPECT_GT(Factorial(-10), 0);
}

TEST(FactorialTest, Zero) { EXPECT_EQ(1, Factorial(0)); }

TEST(FactorialTest, Positive) {
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(6, Factorial(3));
  EXPECT_EQ(40320, Factorial(8));
}

TEST(IsPrimeTest, Negative) {
  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));
}

TEST(IsPrimeTest, Trivial) {
  EXPECT_FALSE(IsPrime(0));
  EXPECT_FALSE(IsPrime(1));
  EXPECT_TRUE(IsPrime(2));
  EXPECT_TRUE(IsPrime(3));
}

TEST(IsPrimeTest, Positive) {
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_TRUE(IsPrime(23));
}
}  // namespace
