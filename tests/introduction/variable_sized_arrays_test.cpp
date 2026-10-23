#include <gtest/gtest.h>
#include "run_io.hpp"
#include "introduction/variable_sized_arrays.hpp"

TEST(VariableSizedArrays, AnswersQueries) {
    EXPECT_EQ(run_io("2 2\n3 1 5 4\n5 1 2 8 9 3\n0 1\n1 3", solve), "5\n9\n");
}
