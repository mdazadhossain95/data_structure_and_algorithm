#include <iostream>
using namespace std;
int main()
{
    //by using getline we can write string with space, tabs or new lines
    char name[100];
    cout << "Enter your name : ";
    cin.getline(name, 100, 'o');
    cout << "Your name is " << name << endl;

    return 0;
}