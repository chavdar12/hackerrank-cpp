#pragma once

class D {
public:
    D() : val(1) {
    }

    void update_val(int new_val) {
        while (new_val % 2 == 0) {
            aA.func(val);
            new_val /= 2;
        }
        while (new_val % 3 == 0) {
            bB.func(val);
            new_val /= 3;
        }
        while (new_val % 5 == 0) {
            cC.func(val);
            new_val /= 5;
        }
    }

    void check(int new_val) {
        update_val(new_val);
        cout << "Value = " << val << endl
                << "A's func called " << aA.getA() << " times " << endl
                << "B's func called " << bB.getB() << " times" << endl
                << "C's func called " << cC.getC() << " times" << endl;
    }

private:
    int val;
    A aA;
    B bB;
    C cC;
};
