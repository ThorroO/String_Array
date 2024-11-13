#pragma once
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array {
private:
    int* arr;
    int size;

public:
    Array();
    Array(int size);
    Array(const Array& other);
    ~Array();

    void fill();
    void display() const;
    void resize(int newSize);
    void sort();
    int min() const;
    int max() const;
};

#endif