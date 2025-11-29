// Output Preview Link:
// https://onlinegdb.com/_LkjAZk6e

#include <iostream>
using namespace std;

int main() {
    int num1, num2,sum=0,product=1;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    sum = num1 + num2;
    product = num1 * num2;
    
    cout << "Sum of the numbers: " << sum << endl;
    cout << "Product of the numbers: " << product << endl;
    
    return 0;
}
