/*
Math Operations
Write a program that reads 2 numbers and print their + - * / as following

- For the inputs 12 and 3
12 + 3 = 15
12 - 3 = 9
12 / 3 = 4
12 * 3 = 36

- Do good testing for your code
1. Consider zero as first or 2nd number.
2. consider negative values.
3. even and odd values.
4. try the MAX of int : 2147483647
*/
//==============================//
// Your Code Below
//==============================//
#include<iostream>
using namespace std;

int main()
{
    float num1, num2;
    cout << "Insert Two Numbers:" << endl;
    cin >> num1 >> num2;
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    return 0;
}