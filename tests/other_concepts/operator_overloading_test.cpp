#include <gtest/gtest.h>
#include <vector>
#include "other_concepts/operator_overloading.hpp"

TEST(OperatorOverloading, AddsMatrices) {
    Matrix x{{{1, 2}, {3, 4}}};
    Matrix y{{{5, 6}, {7, 8}}};
    EXPECT_EQ((x + y).a, (std::vector<std::vector<int> >{{6, 8}, {10, 12}}));
}
