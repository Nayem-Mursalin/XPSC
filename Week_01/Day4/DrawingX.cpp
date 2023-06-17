#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, b;
    cin >> n;
    b = n - 1;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a == b && i == k)
            {
                cout << "X";
                a++;
                b--;
            }
            else if (k == a && i == a)
            {
                cout << "\\";
                a++;
            }
            else if (i == b)
            {
                cout << "/";
                b--;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}