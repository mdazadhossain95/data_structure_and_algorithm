#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //strlen function
    //it will show length of the array
    //it's called length function
    char a[100] = {"abcd"};
    // cin >> a;
    int len = strlen(a);
    cout << "Length is = " << len << endl;

    cout << "---------------" << endl;

    //strcmp function
    //it's called compare 2 string function
    //it will compare between 2 strings
    char str1[1000] = {"abcd"};
    char str2[1000] = {"dcba"};
    // cin >> str1 >> str2;
    if (strcmp(str1, str2) == 0)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    cout << "---------------" << endl;

    //copy Sting function
    char copy1[1000] = {"azad"};
    char copy2[1000] = {"hossain"};
    //before copy
    cout << copy1 << " " << copy2 << endl;
    strcpy(copy1, copy2);
    //after copy
    cout << copy1 << " " << copy2 << endl;

    cout << "---------------" << endl;

    //strncpy function
    char strncpy1[1000] = {"Hello"};
    char strncpy2[1000] = {"World"};
    //before
    cout << strncpy1 << " " << strncpy2 << endl;
    // after
    strncpy(strncpy1, strncpy2, 4);
    cout << strncpy1 << " " << strncpy2 << endl;
    cout << "---------------" << endl;

    //strcat function
    char strcat1[1000] = {"helloworld"};
    char strcat2[1000] = {"takecare"};
    cout << strcat1 << " " << strcat2 << endl;
    strcat(strcat1, strcat2);
    //for(int i = 0; i<n; i++){
        // strcat1[i+n] = strcat2[i]
    // }
    cout << strcat1 << " " << strcat2 << endl;
    cout << "---------------" << endl;
    return 0;
}