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

    int n;
    cin >> n;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    ll ans = 0;
    sort(v.begin(), v.end());
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        ans += (v[i].first * j + 1);
    }
    cout << ans << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i].second << " ";
    }
    cout << endl;
    return 0;
}