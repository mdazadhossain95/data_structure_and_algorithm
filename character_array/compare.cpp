#include <iostream>
#include <cstring>
using namespace std;

bool mystrcmp(char str1[], char str2[])
{
    if (strlen(str1) != strlen(str2))
        return false;

    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != str2[i])
            return false;
    }
    return true;
}

int main()
{
    char str1[1000];
    char str2[1000];
    cin >> str1 >> str2;

    if (mystrcmp(str1, str2))
    {
        cout << "equal";
    }
    else
    {
        cout << "not equal";
    }

    return 0;
}