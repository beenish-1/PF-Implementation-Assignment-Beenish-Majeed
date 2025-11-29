// Output Preview Link:
// https://onlinegdb.com/ZwpbDaxkL

#include <iostream>
using namespace std;

int main() {
  float  millimeters, inches;

    cout << "Enter length in millimeters: ";
    cin >> millimeters;

    // Conversion (1 inch = 25.4 mm)
    inches = millimeters / 25.4;

    cout << millimeters << " mm = " << inches << " inches" << endl;

    return 0;
}
