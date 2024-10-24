#include <iostream>
#include <fstream>
#include "binops.h"
using namespace std;

void Tuple::evaluation () {
    switch(op){
        case '+':
            writetofile(opnd1 + opnd2);
            break;
        case '-':
            writetofile(opnd1 - opnd2);
            break;
        case '*':
            writetofile(opnd1 * opnd2);
            break;
        case '/':
            writetofile(opnd1 / opnd2);
            break;
    }
}

void Tuple::writetofile (float eval) {
    ofstream fout("evals.txt", ios_base::out | ios_base::app);
    fout << opnd1 << " " << op << " " << opnd2 << " -> " << eval << endl;
    fout.flush();
}

