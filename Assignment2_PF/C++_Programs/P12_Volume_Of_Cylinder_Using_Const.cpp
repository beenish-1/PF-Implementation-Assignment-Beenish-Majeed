// Output Preview Link:
// https://onlinegdb.com/ud_OOQu8U

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;  // constant for π
    float radius, height, volume;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    volume = PI * radius * radius * height;

    cout << "Volume of the cylinder = " << volume << endl;

    return 0;
}
