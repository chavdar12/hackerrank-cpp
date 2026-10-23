#include <gtest/gtest.h>
#include <sstream>
#include "debugging/overloading_ostream_operator.hpp"

TEST(OverloadingOstreamOperator, PrintsPerson) {
    Person p("john", "doe");
    std::ostringstream out;
    out << p;
    EXPECT_EQ(out.str(), "first_name=john,last_name=doe");
    EXPECT_EQ(p.get_first_name(), "john");
    EXPECT_EQ(p.get_last_name(), "doe");
}
