#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, sum = 0, min_odd = 10000000009;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] & 1)
        {
            min_odd = min(min_odd, v[i]);
        }
    }

    if (sum & 1)
    {
        sum -= min_odd;
    }

    cout << sum << endl;

    return 0;
}