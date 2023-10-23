#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

bool check(vector<ll> v, ll n, ll m, ll x)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] < m)
        {
            sum += (m - v[i]);
        }
    }
    return (sum <= x);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll l = 0, ans = maxint, h = maxint;
        while (l <= h)
        {
            ll m = l + (h - l) / 2;
            if (check(v, n, m, x))
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                h = m - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}