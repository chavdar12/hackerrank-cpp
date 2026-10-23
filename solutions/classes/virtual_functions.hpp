#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    virtual void getdata() = 0;

    virtual void putdata() = 0;

    virtual ~Person() = default;
};

class Professor : public Person {
private:
    int publications, cur_id;
    static int id;

public:
    Professor() { cur_id = ++id; }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

int Professor::id = 0;

class Student : public Person {
private:
    int marks[6], cur_id;
    static int id;

public:
    Student() { cur_id = ++id; }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) cin >> marks[i];
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; i++) sum += marks[i];
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

int Student::id = 0;
