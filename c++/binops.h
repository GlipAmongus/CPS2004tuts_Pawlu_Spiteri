/*
* MyClass.h
*/
#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include "binops.h"
using namespace std;

#define FIXED 3

struct Tuple {
    float opnd1;
    char op;
    float opnd2;
};

void evaluation (Tuple* tuparr) {
    int i = 0;
    int eval;
    for(int i = 0; i < FIXED; i++) {
        eval = 0;
        switch (tuparr[i].op) {
            case '+':
                eval = tuparr[i].opnd1 + tuparr[i].opnd2;
                break;
            case '-':
                eval = tuparr[i].opnd1 - tuparr[i].opnd2;
                break;
            case '/':
                eval = tuparr[i].opnd1 / tuparr[i].opnd2;
                break;
            case '*':
                eval = tuparr[i].opnd1 * tuparr[i].opnd2;
                break;
        }
        cout << eval << endl;
    }
}


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