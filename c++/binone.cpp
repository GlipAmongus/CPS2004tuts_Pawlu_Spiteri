
#include <iostream>
#include "binops.h"
using namespace std;

int main(){
    //Fixed array on the heap
    Tuple* tups = new Tuple[FIXED];  

    //Read from console (operand1 op operand2)
    for(int i = 0; i < 3; i++){
        cout << "Give me expression "<< i+1 <<"!:" << endl;
        cin >> tups[i].opnd1 >> tups[i].op >> tups[i].opnd2;

        try{
            if(cin.fail()){
                cin.clear();
                cin.ignore(1000, '\n');
                throw "Fail1: incorrect types";
            }

            switch(tups[i].op){
                case '+':
                    cout << "valid" << endl;
                    break;
                case '-':
                    cout << "valid" << endl;
                    break;
                case '/':
                    cout << "valid" << endl;
                    break;
                case '*':
                    cout << "valid" << endl;
                    break;
                default:
                    throw "Fail2: incorrect operator";
            }
        }
        catch (const char * s){
                cout << s << endl;
                cout << "Invalid input. try again!" << endl;
                i--;
                continue;
        }
    }

    for(int i = 0; i < 3; i++){
        cout << tups[i].opnd1 <<" "<< tups[i].op <<" "<< tups[i].opnd2 << endl;
    }

    evaluation(tups);

    return 0;
} 
