// Output Preview Link:
// https://onlinegdb.com/5V6LCWkaT

#include <iostream>
using namespace std;

// Define constant PI
#define PI 3.14159

int main() {
    float radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "The area of the circle is: " << area << endl;

    return 0;
}
