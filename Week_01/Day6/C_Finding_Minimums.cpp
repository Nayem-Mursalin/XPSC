#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, i, j;
    cin >> n >> k;
    int a[n];
    int mn = MAXint;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0, j = 1; i < n; i++, j++)
    {
        mn = min(mn, a[i]);
        if (j == k)
        {
            cout << mn << " ";
            mn = MAXint;
            j = 0;
        }
    }
    if (j != 1)
    {
        cout << mn;
    }
    cout << endl;

    return 0;
}