#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    long long int max, a[110];
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        max = a[0];

        for (int i = 1; i < n; ++i)
        {
            max = (max & a[i]);
        }

        cout << max << endl;
    }

    return 0;
}