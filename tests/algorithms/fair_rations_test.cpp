#include <gtest/gtest.h>
#include "algorithms/fair_rations.hpp"

TEST(FairRations, Possible) {
    EXPECT_EQ(fairRations({2, 3, 4, 5, 6}), "4");
    EXPECT_EQ(fairRations({2, 4}), "0");
}

TEST(FairRations, Impossible) {
    EXPECT_EQ(fairRations({1, 2}), "NO");
}
