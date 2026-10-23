#pragma once

class LRUCache : public Cache {
private:
    int currentSize;

public:
    LRUCache(int capacity) {
        cp = capacity;
        currentSize = 0;
        head = nullptr;
        tail = nullptr;
    }

    void set(int key, int value) override {
        auto it = mp.find(key);
        if (it != mp.end()) {
            it->second->value = value;
            moveToFront(it->second);
            return;
        }

        Node *newNode = new Node(key, value);
        mp[key] = newNode;
        if (currentSize == 0) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        if (currentSize == cp) {
            removeNode(tail);
        }
        currentSize++;
    }

    int get(int key) override {
        auto it = mp.find(key);
        if (it == mp.end()) {
            return -1;
        }
        moveToFront(it->second);
        return it->second->value;
    }

private:
    void moveToFront(Node *node) {
        if (node == head) {
            return;
        }

        node->prev->next = node->next;
        if (node->next != nullptr) {
            node->next->prev = node->prev;
        } else {
            tail = node->prev;
        }

        node->next = head;
        node->prev = nullptr;
        head->prev = node;
        head = node;
    }

    void removeNode(Node *node) {
        if (node == head) {
            head = node->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
        } else if (node == tail) {
            tail = node->prev;
            tail->next = nullptr;
        } else {
            node->prev->next = node->next;
            node->next->prev = node->prev;
        }

        mp.erase(node->key);
        delete node;
        currentSize--;
    }
};
