#include "Array.h"

Array::Array() : size(10) {
    arr = new int[size];
    for (int i = 0; i < size; ++i) arr[i] = 0;
}

Array::Array(int size) : size(size) {
    arr = new int[size];
    for (int i = 0; i < size; ++i) arr[i] = 0;
}

Array::Array(const Array& other) : size(other.size) {
    arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = other.arr[i];
    }
}

Array::~Array() {
    delete[] arr;
}

void Array::fill() {
    cout << "Enter " << size << " elements\n\n--> ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

void Array::display() const {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Array::resize(int newSize) {
    int* newArr = new int[newSize];
    for (int i = 0; i < (newSize < size ? newSize : size); ++i) {
        newArr[i] = arr[i];
    }
    for (int i = size; i < newSize; ++i) {
        newArr[i] = 0;
    }
    delete[] arr;
    arr = newArr;
    size = newSize;
}

void Array::sort() {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int Array::min() const {
    int minValue = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
}

int Array::max() const {
    int maxValue = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}