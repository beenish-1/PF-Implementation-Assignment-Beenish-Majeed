// Output Preview Link:
// https://onlinegdb.com/qkeXeukqh

#include <iostream>
using namespace std;

int main() {
    float marks1, marks2, marks3, marks4, marks5, total, average;

    cout << "Enter marks of 5 subjects (out of 100 each): ";
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5.0;

    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
