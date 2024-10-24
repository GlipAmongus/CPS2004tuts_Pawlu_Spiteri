
#include <iostream>
#include "binops.h"
using namespace std;

struct temp{
    float topnd1;
    float topnd2;
    char top;
};

int main(){
    //Fixed array on the heap
    Tuple *tups = new Tuple[FIXED];  
    temp temp_exp;

    //Read from console (operand1 op operand2)
    for(int i = 0; i < FIXED; i++){
        cout << "Give me expression "<< i+1 <<"!:" << endl;
        cin >> temp_exp.topnd1 >> temp_exp.top >> temp_exp.topnd2;
        try{
            if(cin.fail()){
                cin.clear();
                cin.ignore(1000, '\n');
                throw "Fail1: incorrect types";
            }

            switch(temp_exp.top){
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

        tups[i].setOp(temp_exp.top);
        tups[i].setOpnd1(temp_exp.topnd1);
        tups[i].setOpnd2(temp_exp.topnd2);
        tups[i].evaluation();
    }

    return 0;
} 
