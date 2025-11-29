// Output Preview Link:
// https://onlinegdb.com/XCXjg7sQz

#include <iostream>
using namespace std;

int main() {
    int intPart;
    float fracPart, num = 15.58971;
    intPart = int(num);            
    fracPart = num - intPart;    

    cout << "Integral part: " << intPart << endl;
    cout << "Fractional part: " << fracPart << endl;

    return 0;
}
