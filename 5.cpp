#include <iostream>
using namespace std;
int main()
{
    int n, k, c;
    cin >> n;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
            {
                c = a[i][j];
                a[i][j] = a[i][n - j - 1];
                a[i][n - j - 1] = c;
            }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}