// Output Preview Link:
// https://onlinegdb.com/MQ92dubuz

#include <iostream>
using namespace std;

int main() {
    float radius, area, circumference, PI=3.14159;
     
    cout << "Enter radius of circle: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "Area of Circle: " << area << endl;
    cout << "Circumference of Circle: " << circumference << endl;

    return 0;
}
