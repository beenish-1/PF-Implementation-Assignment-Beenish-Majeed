// Output Preview Link:
// https://onlinegdb.com/qFcG6otZ6

#include <iostream>
using namespace std;

int main() {
    int rollNo;
    float marks1, marks2, marks3, total, average;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks for Programming Fundamentals: ";
    cin >> marks1;

    cout << "Enter marks for Introduction to Computing: ";
    cin >> marks2;

    cout << "Enter marks for Computer Graphics: ";
    cin >> marks3;

    total = marks1 + marks2 + marks3;
    average = total / 3;

    cout << "\nStudent Roll No: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
