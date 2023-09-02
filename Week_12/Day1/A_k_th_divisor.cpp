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

    ll n, k, ans = -1, count = 0;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != (n / i))
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    if (v.size() < k)
    {
        cout << ans << endl;
    }
    else
        cout << v[k - 1] << endl;

    return 0;
}