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

    int n, k;
    cin >> n >> k;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    int ans = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count + v[i].first <= k)
        {
            ans++;
            count += v[i].first;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < ans; i++)
    {
        cout << v[i].second << " ";
    }
    cout << endl;
    return 0;
}