/*
Even and Odd Sum

Give 8 space-separated integers, find the sum of those in even places and the sum of those in odd places.

For Example:
Input: 11 2 7 9 12 -8 3 -1
Output: 2 33
*/
//==============================//
// Your Code Below
//==============================//
#include<iostream>
using namespace std;

int main()
{
    int odd1, even2, odd3, even4, odd5, even6, odd7, even8;
    cin >> odd1 >> even2 >> odd3 >> even4 >> odd5 >> even6 >> odd7 >> even8;
    cout << (even2 + even4 + even6 + even8) << " " << (odd1 + odd3 + odd5 + odd7);
    return 0;
}