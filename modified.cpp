#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y;

    cout <<"Enter the first value: ";  
    cin >>x;
    cout<<"Enter the second value: ";
    cin >>y;

    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " / " << y << " = " << x / y << endl;
    cout << "The remainder of " << x << " divided by " << y << " is " << int(x) % int(y) << endl;

    cout << x << " raised to the power of " << y << " is " <<(pow(x, y)) << endl;
    cout << y << " raised to the power of " << x << " is " <<(pow(y, x))<< endl;

    cout << "The square root of " << x << " is " << sqrt(x) << endl;
    cout << "The square root of " << y << " is " << sqrt(y) << endl;

    return 0;
}