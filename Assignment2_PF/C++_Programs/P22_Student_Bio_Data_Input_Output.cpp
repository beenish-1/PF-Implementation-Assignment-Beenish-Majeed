// Output Preview Link:
// https://onlinegdb.com/eEEsWfpsjh

#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    float height;
    char gender;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Height (in cm): ";
    cin >> height;
    cout << "Enter Gender (M/F): ";
    cin >> gender;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Gender: " << gender << endl;

    return 0;
}
