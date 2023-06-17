#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> sum(n + 1, 0);
    ll total = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
        sum[i + 1] = total;
    }
    int T;
    cin >> T;
    while (T--)
    {
        int type, l, r;
        cin >> l >> r;
        ll ans = 0;
        ans = sum[r + 1] - sum[l];

        cout << ans << endl;
    }
    return 0;
}