#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 8;

    // printf(a);

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << a << " " << b << endl;

    //other way
    int x = 1;
    int y = 5;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << x << " " << y << endl;


    //other way 
    // swap(a, b);

    return 0;
}