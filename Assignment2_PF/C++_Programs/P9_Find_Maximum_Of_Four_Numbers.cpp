// Output Preview Link:
// https://onlinegdb.com/f7MEOyPQo

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, maximum;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    maximum = num1;

    if (num2 >  maximum)
        maximum = num2;

    if (num3 >  maximum)
         maximum = num3;

    if (num4 > maximum)
        maximum = num4;

    cout << "The maximum number is: " <<  maximum << endl;

    return 0;
}
