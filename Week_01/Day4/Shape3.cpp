#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    // cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << "*";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}