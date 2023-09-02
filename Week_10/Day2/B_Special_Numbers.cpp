#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

const int M = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        ll ans = 0, j = 1;
        while (k)
        {
            if (k & 1)
            {
                ans = (ans + j) % M;
            }
            k = k >> 1;
            j = (j * n) % M;
        }
        cout << ans << endl;
    }
    return 0;
}