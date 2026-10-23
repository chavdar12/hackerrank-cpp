#include <gtest/gtest.h>
#include "run_io.hpp"
#include "introduction/basic_data_types.hpp"

TEST(BasicDataTypes, FormatsEachType) {
    EXPECT_EQ(run_io("3 12345678912345 a 334.23 14049.30493", solve),
              "3\n12345678912345\na\n334.230\n14049.304930000\n");
}
