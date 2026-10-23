#include <gtest/gtest.h>
#include "algorithms/flatland_space_stations.hpp"

TEST(FlatlandSpaceStations, Samples) {
    EXPECT_EQ(flatlandSpaceStations(5, {0, 4}), 2);
    EXPECT_EQ(flatlandSpaceStations(6, {0, 1, 2, 4, 3, 5}), 0);
}

TEST(FlatlandSpaceStations, StationAtOneEnd) {
    EXPECT_EQ(flatlandSpaceStations(5, {4}), 4);
}
