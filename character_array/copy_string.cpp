#include <iostream>
#include <cstring>
using namespace std;

void mystrcpy(int copy1[], int copy2[])
{
    int n = 0;
    for (int i = 0; i < n; i++)
    {
        copy1[i] = copy2[i];
    }
}

int main()
{

    
    char copy1[1000] = {"azad"};
    char copy2[1000] = {"hossain"};
    //before copy
    cout << copy1 << " " << copy2 << endl;
    strcpy(copy1, copy2);
    //after copy
    cout << copy1 << " " << copy2 << endl;

    cout << "---------------" << endl;
    return 0;
}