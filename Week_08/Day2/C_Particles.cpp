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
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        ll evn = 0, odd = 0, neg = 0, mx = -9223372036854770;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                neg++;
            }
            mx = max(mx, v[i]);
            if ((i & 1) && v[i] > 0)
            {
                odd += v[i];
            }
            else if (!(i & 1) && v[i] > 0)
            {
                evn += v[i];
            }
        }
        ll ans = -922337203685477580;
        if (neg == n)
        {
            ans = mx;
        }
        else
            ans = max(ans, (max(odd, evn)));
        cout << ans << endl;
    }
    return 0;
}