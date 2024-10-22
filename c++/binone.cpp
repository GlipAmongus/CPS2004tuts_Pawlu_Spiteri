
#include <iostream>
 
// #include "binops.h"
using namespace std;

struct Tuple {
    float opnd1;
    char op;
    float opnd2;
};

int main(){
    Tuple* tups = new Tuple[3];  

    for(int i = 1; i <= 3; i++){
        cout << "Give me expression "<< i <<"!:" << endl;
        cin >> tups[i].opnd1 >> tups[i].op >> tups[i].opnd2;
        // Implement exception handling for incorrect types
    }
    for(int i = 1; i <= 3; i++){
        cout << tups[i].opnd1 <<" "<< tups[i].op <<" "<< tups[i].opnd2 << endl;
    }

    return 0;
} 
