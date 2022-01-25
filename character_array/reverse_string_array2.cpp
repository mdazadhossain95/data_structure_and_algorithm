#include <iostream>
using namespace std;

//length of the string
int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

//create new two variables one is 0, other is total length - 1
void reverse(char input[])
{
    int s = 0;
    int e = length(input) - 1;

    //doing condition and swap the char which is build in cpp.
    while (s < e)
    {
        swap(input[s], input[e]);
        s++;
        e--;
    }
}

int main()
{

    //input of the string
    char name[100];
    cout << "Enter your name : ";
    cin.getline(name, 100);
    cout << "Name is : " << name << endl;

    //using reverse function
    reverse(name);
    cout << "Reverse String : " << name << endl;

    return 0;
}