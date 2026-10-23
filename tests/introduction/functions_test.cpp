#include <gtest/gtest.h>
#include "introduction/functions.hpp"

TEST(Functions, MaxOfFour) {
    EXPECT_EQ(max_of_four(3, 4, 6, 5), 6);
    EXPECT_EQ(max_of_four(9, 1, 2, 3), 9);
    EXPECT_EQ(max_of_four(-4, -3, -2, -1), -1);
}
