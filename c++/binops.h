/*
* MyClass.h
*/
#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <fstream>
#include "binops.h"
using namespace std;

#define FIXED 4

class Tuple {
    private:
        float opnd1;
        float opnd2;    
        char op;

        //write to file
        void writetofile (float eval) ;
    public:
        // getters and setters here
        Tuple(float operand1 = 0.0, float operand2 = 0.0, char opcode = 0)
            : opnd1(operand1), opnd2(operand2), op(opcode) {}
        
        ~Tuple(){}
        
        // Getter and Setter for operand 1
        float getOpnd1() const { return opnd1; }
        void setOpnd1(float operand1) { opnd1 = operand1; }

        // Getter and Setter for operand 2
        float getOpnd2() const { return opnd2; }
        void setOpnd2(float operand2) { opnd2 = operand2; }

        // Getter and Setter for opcode
        char getOp() const { return op; }
        void setOp(char opcode) { op = opcode; }

        //eval for any tuple
        void evaluation () ;
};


#endif