// Output Preview Link:
// https://onlinegdb.com/_kNhZ9A8h

#include <iostream>
using namespace std;

int main() {
    float vi, t, a, s;

    cout << "Enter initial velocity (vi): ";
    cin >> vi;

    cout << "Enter time (t): ";
    cin >> t;

    cout << "Enter acceleration (a): ";
    cin >> a;

    s = vi * t + 0.5 * a * t * t; 

    cout << "S = " << s << endl;
    return 0;
}
