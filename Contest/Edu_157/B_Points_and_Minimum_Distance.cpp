#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>
#define vi vector<int>

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
        vector<int> v(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<pii> p(n);
        for (int i = 0, j = 2 * n - 1; i < n; i++, j--)
        {
            p[i].first = v[i];
            p[i].second = v[j];
        }
        ll total = 0;
        for (int i = 1; i < n; i++)
        {
            total += abs(p[i].first - p[i - 1].first) + abs(p[i].second - p[i - 1].second);
        }
        cout << total << endl;
        for (int i = 0; i < n; i++)
        {
            cout << p[i].first << " " << p[i].second << endl;
        }
    }
    return 0;
}