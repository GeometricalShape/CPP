/*
Swapping 3 numbers

- Write a code to swap 3 numbers
- Let's say we have numbers [a = 115, b = 20, c = 301]
- We want the fianl value to be [a = 20, b = 301, c = 115]
- Do it in 4 lines
*/
//==============================//
// Your Code Below
//==============================//
#include<iostream>
using namespace std;

int main()
{
    int A, B, C, holder = 1;
    cin >> A >> B >> C;
    cout << "A = " << A << "\nB = " << B <<"\nC = " << C << endl;
    holder = B; B = C; C = A; A = holder;
    cout << "A = " << A << "\nB = " << B <<"\nC = " << C;
    return 0;
}