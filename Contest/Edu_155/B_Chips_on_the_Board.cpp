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
        ll n, min_a = maxint, min_b = maxint;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        ll sum_a = 0, sum_b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum_a += a[i];
            min_a = min(min_a, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum_b += b[i];
            min_b = min(min_b, b[i]);
        }
        ll ans1, ans2;
        ans1 = sum_b + (min_a * n);
        ans2 = sum_a + (min_b * n);
        cout << ((ans1 < ans2) ? ans1 : ans2) << endl;
    }
    return 0;
}