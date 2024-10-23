#include <iostream>
#include <fstream>
#include "binops.h"
using namespace std;

ofstream fout("evals.txt"); 

void Tuple::evaluation (Tuple* tuparr) {
    int i = 0;
    float eval;
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
                if (tuparr[i].opnd2 != 0) {
                    eval = tuparr[i].opnd1 / tuparr[i].opnd2;
                } else {
                    throw std::runtime_error("Division by zero.");
                }
            case '*':
                eval = tuparr[i].opnd1 * tuparr[i].opnd2;
                break;
        }

        fout << tuparr[i].opnd1 <<" "<< tuparr[i].op <<" "<< tuparr[i].opnd2 << " -> " << eval << endl;
    }
}