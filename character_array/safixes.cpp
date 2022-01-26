#include <iostream>
using namespace std;

void printallsafixes(char str[])
{

    for (int e = 0; str[e] != '\0'; e++)
    {
        for (int s = 4; s >= e; s--)
        {
            cout << str[s];
        }
        cout << endl;
    }
}
int main()
{
    char str[] = "abcd";
    printallsafixes(str);
    return 0;
}