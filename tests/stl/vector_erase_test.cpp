#include <gtest/gtest.h>
#include "run_io.hpp"
#include "stl/vector_erase.hpp"

TEST(VectorErase, ErasesPositionThenRange) {
    EXPECT_EQ(run_io("6\n1 4 6 2 8 9\n2\n2 4", solve), "3\n1 8 9 ");
}
