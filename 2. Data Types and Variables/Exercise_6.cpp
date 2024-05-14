/*
Write a program that reads 2 students information about math exam.
- Read per student: name, id, and grade.
- Then print them.

Be a good software engineer 
- Think deeply in your selected data types.

The console should look like this
==Inputs==
What is student 1 name: `person1`
His id: `1`
His math exam grade: `1`
What is student 2 name: `person2`
His id: `1`
His math exam grade: `1`

==Outputs==
Students grade in math
preson1 (with id `1`) got grade: `1`
preson2 (with id `1`) got grade: `1`
Average grade is `12`
*/
//==============================//
// Your Code Below
//==============================//
#include<iostream>
using namespace std;

int main()
{
    string s1_name, s2_name;
    int s1_id, s2_id;
    double s1_grade, s2_grade;

    cout << "Student 1 Name\n"; cin >> s1_name;
    cout << "His ID\n"; cin >> s1_id;
    cout << "His Math Grade\n"; cin >> s1_grade;

    cout << "Student 2 Name\n"; cin >> s2_name;
    cout << "His ID\n"; cin >> s2_id;
    cout << "His Math Grade\n"; cin >> s2_grade;
    
    cout << "Students Grade in Math" << endl;
    cout << s1_name << " (with ID " << s1_id <<") got grade: "<< s1_grade << endl;
    cout << s2_name << " (with ID " << s2_id <<") got grade: "<< s2_grade << endl;
    cout << "Average Grade is " << ((s1_grade + s2_grade) / 2.0);
    return 0;
}