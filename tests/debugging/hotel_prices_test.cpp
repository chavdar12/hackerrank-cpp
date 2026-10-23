#include <gtest/gtest.h>
#include <memory>
#include "debugging/hotel_prices.hpp"

TEST(HotelPrices, StandardRoom) {
    EXPECT_EQ(HotelRoom(2, 1).get_price(), 200);
}

TEST(HotelPrices, ApartmentThroughBasePointer) {
    std::unique_ptr<HotelRoom> room = std::make_unique<HotelApartment>(3, 1);
    EXPECT_EQ(room->get_price(), 350);
}
