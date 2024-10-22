
#include <iostream>
 
// #include "binops.h"
using namespace std;

int main(int argc, char *argv[]){

    // int carrots;
    // cout << "Give me carrots!" << endl;
    // cin >> carrots;
    // cout << "Gonna eat all your " << carrots << " carrots!" << endl;

    printf("You have entered %d arguments:\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
} 
