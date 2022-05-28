/*Write a program to demonstrate use of inline functions.

Syntax of inline Function:
inline return_type function_name(arguments...) { //function_code return_value; } */

#include <iostream>
using namespace std;

inline void displayNum(int num) {
    cout << num << endl;
}

int main() {
    // first function call
    displayNum(5);

    // second function call
    displayNum(8);

    // third function call
    displayNum(666);

    return 0;
}


