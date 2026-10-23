#include <gtest/gtest.h>
#include "classes/structs.hpp"

TEST(Structs, HoldsFields) {
    Student st{15, "john", "carmack", 10};
    EXPECT_EQ(st.age, 15);
    EXPECT_EQ(st.first_name, "john");
    EXPECT_EQ(st.last_name, "carmack");
    EXPECT_EQ(st.standard, 10);
}
