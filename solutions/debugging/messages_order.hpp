#pragma once
#include <string>
using namespace std;

class Message {
public:
    Message() {
    }

    Message(const string &t) : text(t) {
    }

    const string &get_text() const {
        return text;
    }

    bool operator<(const Message &other) const {
        return id < other.id;
    }

private:
    static int cur_id;
    int id = cur_id++;
    string text;
};

int Message::cur_id = 0;

class MessageFactory {
public:
    Message create_message(const string &text) {
        return Message(text);
    }
};
