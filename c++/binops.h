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

class Tuple {
    private:
        float opnd1;
        float opnd2;    
        char op;
    public:
        // getters and setters here
        Tuple(float operand1 = 0.0, float operand2 = 0.0, char opcode = 0)
            : opnd1(operand1), opnd2(operand2), op(opcode) {}
        
        ~Tuple(){}
        
        void evaluation(Tuple* tuparr);
};


#endif