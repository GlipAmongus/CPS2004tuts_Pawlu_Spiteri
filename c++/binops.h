/*
* MyClass.h
*/
#ifndef MYCLASS_H
#define MYCLASS_H

// #include "binops.h"

class MyClass {
public:
    MyClass(); // Default constructor
    MyClass(int v, int anotherV); // Parametrized constructor
    MyClass(const MyClass& other); // Copy constructor
    ~MyClass();
    
    void setValue(int newValue);
    void printValueAndPointer();
    int multiplyValues();

private:
    int value;
    int anotherValue;
};

#endif