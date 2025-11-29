// Output Preview Link:
// https://onlinegdb.com/cqb-bQ0o3

#include <iostream>
using namespace std;

int main() {
    int ageYears, ageMonths, ageDays;
    cout << "Enter your age in years: ";
    cin >> ageYears;

    ageMonths = ageYears * 12;
    ageDays = ageYears * 365; 

    cout << "Your age in months: " << ageMonths << endl;
    cout << "Your age in days: " << ageDays << endl;

    return 0;
}
