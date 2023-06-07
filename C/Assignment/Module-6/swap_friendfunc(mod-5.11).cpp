//Write a program to swap the two numbers using friend function
#include <iostream>
using namespace std;
class Number {
private:
    int value;

public:
    Number(int val = 0) : value(val) {}

    friend void swapNumbers(Number& num1, Number& num2);
    void display() const {
        cout << "Value: " << value << endl;
    }
};

void swapNumbers(Number& num1, Number& num2) {
    int temp = num1.value;
    num1.value = num2.value;
    num2.value = temp;
}

int main() {
    Number num1(50);
    Number num2(30);

    cout << "Before swapping: " << endl;
    num1.display();
    num2.display();

    swapNumbers(num1, num2);

    cout << "After swapping: " << endl;
    num1.display();
    num2.display();

    return 0;
}

