#include <iostream>
using namespace std;

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[100];
    cout << "Enter your name : ";
    cin >> name;
    // name[3] = '\0';
    cout << "Your name is " << name << endl;

    cout << "Your name length is " << length(name) << endl;

    return 0;
}