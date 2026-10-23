#pragma once

class Box {
private:
    int length;
    int breadth;
    int height;

public:
    Box() : length(0), breadth(0), height(0) {
    }

    Box(int l, int b, int h) : length(l), breadth(b), height(h) {
    }

    Box(const Box &B) : length(B.length), breadth(B.breadth), height(B.height) {
    }

    int getLength() { return length; }
    int getBreadth() { return breadth; }
    int getHeight() { return height; }

    long long CalculateVolume() {
        return (long long) length * breadth * height;
    }

    bool operator<(Box &B) {
        if (length != B.length) return length < B.length;
        if (breadth != B.breadth) return breadth < B.breadth;
        return height < B.height;
    }

    friend ostream &operator<<(ostream &out, Box &B) {
        return out << B.length << " " << B.breadth << " " << B.height;
    }
};
