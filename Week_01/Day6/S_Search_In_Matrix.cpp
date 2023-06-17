#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{

    int n, m, x;
    cin >> n >> m;
    int a[n][m];
    int mn = MAXint;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> x;
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                check = true;
                break;
            }
        }
    }
    cout << ((check) ? "will not take number" : "will take number") << endl;

    return 0;
}