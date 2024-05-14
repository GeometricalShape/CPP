/*
Swapping 2 numbers

Write a program that reads 2 variables `num1` and `num2` 
    E.g. say we read `num1 = 7` and `num2 = 231`
Target: we want to swap the values on `num1` and `num2`

For Example:
input => Number 1: `12`
input => Number 2: `20`

output =>
Number 1 = 20
Number 2 = 12
*/
//==============================//
// Your Code Below
//==============================//
#include<iostream>
using namespace std;

int main()
{
    int num1, num2, holder = 1;
    cout << "Number 1 \n"; cin >> num1;
    cout << "Number 2 \n"; cin >> num2;

    holder = num1;
    num1 = num2;
    num2 = holder;

    cout << "Number 1 :" << num1 << endl;
    cout << "Number 2 :" << num2 << endl;

    return 0;
}