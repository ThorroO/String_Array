#pragma once
#ifndef STRING_H
#define STRING_H

#include <iostream>
using namespace std;

class String {
private:
    char* str;
    int length;

public:
    String();
    String(int size);
    String(const char* inputStr);
    String(const String& other);
    ~String();

    void input();
    void output() const;
};

#endif