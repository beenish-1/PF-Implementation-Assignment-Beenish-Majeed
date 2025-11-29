// Output Preview Link:
// https://onlinegdb.com/jX9QdD1Gu

#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = 5.0 / 9 * (fahrenheit - 32);

    cout << "Temperature in Celsius: " << celsius << "°C" << endl;

    return 0;
}
