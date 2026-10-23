#include <gtest/gtest.h>
#include "run_io.hpp"
#include "stl/vector_sort.hpp"

TEST(VectorSort, SortsAscending) {
    EXPECT_EQ(run_io("5\n1 6 10 8 4", solve), "1 4 6 8 10 ");
}
