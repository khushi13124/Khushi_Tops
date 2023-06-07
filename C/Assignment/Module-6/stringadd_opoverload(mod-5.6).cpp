/*
Write a program of two concatenate the two strings using Operator 
Overloading
*/
#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;

public:
    MyString(const char* s = "") {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }

    MyString operator+(const MyString& rhs) const {
        int len = std::strlen(str) + std::strlen(rhs.str);
        char* temp = new char[len + 1];
        std::strcpy(temp, str);
        std::strcat(temp, rhs.str);
        MyString result(temp);
        delete[] temp;
        return result;
    }

    void display() const {
        std::cout << str << std::endl;
    }

    ~MyString() {                //destructor
        delete[] str;
    }
};

int main() {
    MyString s1("Khushi");
    MyString s2(" Patel");
    MyString s3 = s1 + s2;

    s3.display();  

    return 0;
}

