/*
* MyClass.h
*/
#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <fstream>
#include "binops.h"
using namespace std;

#define FIXED 3

struct Tuple {
    float opnd1;
    char op;
    float opnd2;
};

class tuple {
    private:
        float opnd1;
        float opnd2;    
        char op;
    public:
        // getters and setters here
        void evaluation(Tuple* tuparr);
};

ofstream fout("evals.txt");





// class MyClass {
// public:
//     MyClass(); // Default constructor
//     MyClass(int v, int anotherV); // Parametrized constructor
//     MyClass(const MyClass& other); // Copy constructor
//     ~MyClass();
    
//     void setValue(int newValue);
//     void printValueAndPointer();
//     int multiplyValues();

// private:
//     int value;
//     int anotherValue;
// };

#endif