#include <gtest/gtest.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Spell {
private:
    string scrollName;

public:
    Spell() : scrollName("") {
    }

    Spell(string name) : scrollName(name) {
    }

    virtual ~Spell() {
    }

    string revealScrollName() { return scrollName; }
};

class Fireball : public Spell {
    int power;

public:
    Fireball(int power) : power(power) {
    }

    void revealFirepower() { cout << "Fireball: " << power << endl; }
};

class Frostbite : public Spell {
    int power;

public:
    Frostbite(int power) : power(power) {
    }

    void revealFrostpower() { cout << "Frostbite: " << power << endl; }
};

class Thunderstorm : public Spell {
    int power;

public:
    Thunderstorm(int power) : power(power) {
    }

    void revealThunderpower() { cout << "Thunderstorm: " << power << endl; }
};

class Waterbolt : public Spell {
    int power;

public:
    Waterbolt(int power) : power(power) {
    }

    void revealWaterpower() { cout << "Waterbolt: " << power << endl; }
};

class SpellJournal {
public:
    static string journal;
    static string read() { return journal; }
};

string SpellJournal::journal = "";

#include "run_io.hpp"
#include "inheritance/magic_spells.hpp"

TEST(MagicSpells, RevealsKnownSpells) {
    Fireball fb(5);
    Frostbite fr(6);
    Waterbolt wb(7);
    Thunderstorm ts(8);
    EXPECT_EQ(run_io("", [&] { counterspell(&fb); }), "Fireball: 5\n");
    EXPECT_EQ(run_io("", [&] { counterspell(&fr); }), "Frostbite: 6\n");
    EXPECT_EQ(run_io("", [&] { counterspell(&wb); }), "Waterbolt: 7\n");
    EXPECT_EQ(run_io("", [&] { counterspell(&ts); }), "Thunderstorm: 8\n");
}

TEST(MagicSpells, GenericSpellPrintsLongestCommonSubsequence) {
    SpellJournal::journal = "BDCABA";
    Spell sp("ABCBDAB");
    EXPECT_EQ(run_io("", [&] { counterspell(&sp); }), "4\n");
}
