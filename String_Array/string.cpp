#include "String.h"

String::String() : length(80) {
    str = new char[length + 1];
    str[0] = '\0';
}

String::String(int size) : length(size) {
    str = new char[length + 1];
    str[0] = '\0';
}

String::String(const char* inputStr) {
    length = 0;
    while (inputStr[length] != '\0') ++length;
    str = new char[length + 1];
    for (int i = 0; i < length; i++) {
        str[i] = inputStr[i];
    }
    str[length] = '\0';
}

String::String(const String& other) : length(other.length) {
    str = new char[length + 1];
    for (int i = 0; i < length; i++) {
        str[i] = other.str[i];
    }
    str[length] = '\0';
}

String::~String() {
    delete[] str;
}

void String::input() {
    cout << "Enter a string\n\n--> ";
    cin.getline(str, length + 1);
}

void String::output() const {
    cout << str << endl;
}