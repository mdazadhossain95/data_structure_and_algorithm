#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl;

    //normal order
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    //reverse order
    for (int i = 4 - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}