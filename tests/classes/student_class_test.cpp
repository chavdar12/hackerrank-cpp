#include <gtest/gtest.h>
#include "classes/student_class.hpp"

TEST(StudentClass, SettersGettersAndToString) {
    Student st;
    st.set_age(15);
    st.set_first_name("john");
    st.set_last_name("carmack");
    st.set_standard(10);
    EXPECT_EQ(st.get_age(), 15);
    EXPECT_EQ(st.get_first_name(), "john");
    EXPECT_EQ(st.get_last_name(), "carmack");
    EXPECT_EQ(st.get_standard(), 10);
    EXPECT_EQ(st.to_string(), "15,john,carmack,10");
}
