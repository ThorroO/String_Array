#include <iostream>
#include "String.h"
#include "Array.h"

using namespace std;

int main() {
    String s1;
    s1.input();
    s1.output();

    Array a1(5);
    a1.fill();
    a1.display();

    cout << "Minimum value: " << a1.min() << endl;
    cout << "Maximum value: " << a1.max() << endl;

    a1.sort();
    cout << "Sorted array: ";
    a1.display();

    return 0;
}