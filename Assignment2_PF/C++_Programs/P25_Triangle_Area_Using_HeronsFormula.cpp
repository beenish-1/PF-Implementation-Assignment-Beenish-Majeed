// Output Preview Link:
// https://onlinegdb.com/gBB-T6TBi

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, area, s; 
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2.0;  
    area = sqrt(s * (s - a) * (s - b) * (s - c));  
    
    cout << "Area of triangle: " << area << endl;
    return 0;
}
