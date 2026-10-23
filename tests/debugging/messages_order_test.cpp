#include <gtest/gtest.h>
#include <algorithm>
#include <random>
#include <vector>
#include "debugging/messages_order.hpp"

TEST(MessagesOrder, SortingRestoresCreationOrder) {
    MessageFactory factory;
    vector<string> texts = {"Alex", "Hello Monique", "What'up?", "Not much :(", "zz"};
    vector<Message> messages;
    for (auto &t: texts) messages.push_back(factory.create_message(t));

    shuffle(messages.begin(), messages.end(), mt19937(42));
    sort(messages.begin(), messages.end());

    for (size_t i = 0; i < texts.size(); i++) {
        EXPECT_EQ(messages[i].get_text(), texts[i]);
    }
}
