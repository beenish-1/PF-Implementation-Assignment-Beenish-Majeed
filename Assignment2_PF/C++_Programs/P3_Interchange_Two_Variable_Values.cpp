// Output Preview Link:
// https://onlinegdb.com/8kJGw9LH4

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    temp = a;   
    a = b;      
    b = temp;   

    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
