#include <gtest/gtest.h>
#include "classes/inherited_code.hpp"

TEST(InheritedCode, CarriesLength) {
    try {
        throw BadLengthException(3);
    } catch (BadLengthException e) {
        EXPECT_EQ(e.what(), 3);
        return;
    }
    FAIL();
}
