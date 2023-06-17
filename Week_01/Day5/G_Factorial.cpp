#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, T;
    cin >> T;
    while (T--)
    {
        ll fac = 1;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            fac *= i;
        }
        cout << fac << endl;
    }

    return 0;
}