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

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = v[n - 1];

        vector<ll> arr(n);
        arr[0] = 0;
        for (int i = 1; i < n; i++)
        {
            arr[i] = arr[i - 1] + i * (v[i] - v[i - 1]);
            ans -= arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}