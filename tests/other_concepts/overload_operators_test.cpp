#include <gtest/gtest.h>
#include <sstream>
#include "other_concepts/overload_operators.hpp"

TEST(OverloadOperators, ReadAddPrint) {
    istringstream in("3+i4 5+i6");
    Complex x, y;
    in >> x >> y;
    ostringstream out;
    out << x + y;
    EXPECT_EQ(out.str(), "8+i10");
}
