// Output Preview Link:
// https://onlinegdb.com/pnJReX5meD

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
   
    temp = a;
    a = b;
    b = temp;
    
    cout << "After interchange, first value = " << a << ", second value = " << b << endl;
    
    return 0;
}
