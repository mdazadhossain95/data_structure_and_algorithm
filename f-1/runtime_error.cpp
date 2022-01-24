#include <iostream>
using namespace std;
int main()
{
    int a[100];
    // cout<<a[100];

    
    //which one i'm trying to accese but it's not belong to me...
    //maximum array size a[10^6] or sometimes a[10^5]
    //(10^5 - 10^6) can't make bigger that that

    // cout<<a[-1]  doesn't exist
    
    //Segmentation fault (core dumped)
    cout << a[20000];
    return 0;
}