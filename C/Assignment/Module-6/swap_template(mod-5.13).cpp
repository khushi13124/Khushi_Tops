//Write a program of to swap the two values using templates
#include <iostream>
using namespace std;
template <typename T>
void swapValues(T& value1, T& value2) {
    T temp = value1;
    value1 = value2;
    value2 = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    cout << "Before swapping: " << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    swapValues(num1, num2);

    cout << "After swapping: " << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}

