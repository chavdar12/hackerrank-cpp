#include <gtest/gtest.h>
#include <map>
using namespace std;

struct Node {
    Node *next;
    Node *prev;
    int value;
    int key;

    Node(Node *p, Node *n, int k, int val) : next(n), prev(p), value(val), key(k) {
    }

    Node(int k, int val) : next(nullptr), prev(nullptr), value(val), key(k) {
    }
};

class Cache {
protected:
    map<int, Node *> mp;
    int cp;
    Node *tail;
    Node *head;

    virtual void set(int, int) = 0;

    virtual int get(int) = 0;
};

#include "classes/lru_cache.hpp"

TEST(LRUCache, MissReturnsMinusOne) {
    LRUCache c(2);
    EXPECT_EQ(c.get(1), -1);
}

TEST(LRUCache, SetGetAndUpdate) {
    LRUCache c(2);
    c.set(1, 10);
    c.set(1, 11);
    EXPECT_EQ(c.get(1), 11);
}

TEST(LRUCache, EvictsLeastRecentlyUsed) {
    LRUCache c(2);
    c.set(1, 1);
    c.set(2, 2);
    c.get(1);
    c.set(3, 3);
    EXPECT_EQ(c.get(2), -1);
    EXPECT_EQ(c.get(1), 1);
    EXPECT_EQ(c.get(3), 3);
}

TEST(LRUCache, StaysWithinCapacityAfterManyEvictions) {
    LRUCache c(2);
    for (int k = 1; k <= 5; k++) c.set(k, k);
    EXPECT_EQ(c.get(3), -1);
    EXPECT_EQ(c.get(4), 4);
    EXPECT_EQ(c.get(5), 5);
}

TEST(LRUCache, CapacityOne) {
    LRUCache c(1);
    c.set(1, 1);
    c.set(2, 2);
    c.set(3, 3);
    EXPECT_EQ(c.get(1), -1);
    EXPECT_EQ(c.get(2), -1);
    EXPECT_EQ(c.get(3), 3);
}
