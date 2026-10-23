#include <gtest/gtest.h>
#include "other_concepts/variadics.hpp"

TEST(Variadics, ReversedBinary) {
    EXPECT_EQ((reversed_binary_value<0, 0, 1>()), 4);
    EXPECT_EQ((reversed_binary_value<1, 0, 1, 1>()), 13);
    EXPECT_EQ((reversed_binary_value<0, 0, 0>()), 0);
}
