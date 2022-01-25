#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char normal[n];

    for (int i = 0; i < n; i++)
    {
        cin >> normal[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << normal[i] << " ";
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << normal[i] << " ";
    }
    return 0;
}