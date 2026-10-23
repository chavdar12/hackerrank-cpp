#include <gtest/gtest.h>
#include "run_io.hpp"
#include "stl/maps.hpp"

TEST(Maps, AccumulateEraseQuery) {
    EXPECT_EQ(run_io("7\n1 Jesse 20\n1 Jess 12\n1 Jess 18\n3 Jess\n3 Jesse\n2 Jess\n3 Jess", solve),
              "30\n20\n0\n");
}
