// Output Preview Link:
// https://onlinegdb.com/eo3SGRzyz

#include <iostream>
using namespace std;

int main() {
    int ageYears;
    int ageMonths;

    cout << "Enter your age in years: ";
    cin >> ageYears;

    // Calculate age in months
    ageMonths = ageYears * 12;

    cout << "Your age in months is: " << ageMonths << " months." << endl;

    return 0;
}
