#include <iostream>
using namespace std;

void printArray(int a[][2], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int a[][2] = {{1, 2}, {3, 4}};
    printArray(a, 2, 2);
    int m, n;
    cin >> m >> n;

    return 0;
}

//when we creating 2d array it's importent to must have column. caluse n[i][j] = i + c + j
//here c is column if c column value is not detarmind then that formula will not work.
//so that why row doesn't metter but column is must needed.