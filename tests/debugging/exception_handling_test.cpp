#include <gtest/gtest.h>
#include "run_io.hpp"
#include "debugging/exception_handling.hpp"

TEST(ExceptionHandling, LargestProperDivisor) {
    EXPECT_EQ(largest_proper_divisor(10), 5);
    EXPECT_EQ(largest_proper_divisor(7), 1);
    EXPECT_THROW(largest_proper_divisor(0), invalid_argument);
    EXPECT_THROW(largest_proper_divisor(1), invalid_argument);
}

TEST(ExceptionHandling, ProcessInput) {
    EXPECT_EQ(run_io("", [] { process_input(10); }),
              "result=5\nreturning control flow to caller\n");
    EXPECT_EQ(run_io("", [] { process_input(0); }),
              "largest proper divisor is not defined for n=0\nreturning control flow to caller\n");
}
