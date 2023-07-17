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

    ll n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 2; i < n; i++)
    {
        if (v[i] == 1 && v[i - 1] == 0 && v[i - 2] == 1)
        {
            v[i] = 0;
            ans++;
        }
    }
    if (v[n - 1] == 1 && v[n - 2] == 0 && v[n - 3])
    {
        v[n - 1] = 0;
        ans++;
    }

    cout << ans << endl;
    return 0;
}