#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{

    int n, count = 0;
    cin >> n;
    int a[n];
    int mn = MAXint;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            count++;
        }
    }
    cout << ((count & 1) ? "Lucky" : "Unlucky") << endl;

    return 0;
}