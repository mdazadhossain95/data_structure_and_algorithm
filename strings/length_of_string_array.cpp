#include <iostream>
using namespace std;
int main()
{
    //limitation of char
    //1 - must be input should n-1 
    //2 - don't do any space, tabs or new lines otherwise cpp will do the null value in that space, tabs or new lines. 
    // after null value cpp print nothing
    char input[100];
    cin >> input;
    cout << endl;
    cout << input << endl;
    return 0;
}