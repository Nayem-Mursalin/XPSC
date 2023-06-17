#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{

    int n, m;
    cin >> n >> m;
    int a[n];
    int x[m];
    for (int i = 0; i <= m; i++)
    {
        x[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= m)
        {
            x[a[i]]++;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        cout << x[i] << endl;
    }

    return 0;
}