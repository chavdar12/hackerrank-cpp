#include <gtest/gtest.h>
#include "introduction/pointer.hpp"

TEST(Pointer, SumAndAbsoluteDifference) {
    int a = 4, b = 5;
    update(&a, &b);
    EXPECT_EQ(a, 9);
    EXPECT_EQ(b, 1);
}
