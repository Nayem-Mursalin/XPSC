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
        ll n, total = 0;
        cin >> n;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];
        }
        sort(v.begin(), v.end());
        for (ll i = 0; i < n; i++)
        {
            cout << total << " ";
            total -= v[i];
        }
        cout << endl;
    }
    return 0;
}