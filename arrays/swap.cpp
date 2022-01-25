#include <iostream>
using namespace std;
int main()
{

    int a = 9;
    int b = 10;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;

    return 0;
}