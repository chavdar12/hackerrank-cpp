#include <gtest/gtest.h>
#include "run_io.hpp"
#include "other_concepts/bit_array.hpp"

TEST(BitArray, Sample) {
    EXPECT_EQ(run_io("3 1 1 1", solve), "3");
}

TEST(BitArray, ConstantSequence) {
    EXPECT_EQ(run_io("5 0 0 0", solve), "1");
}
