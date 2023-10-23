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
        int n;
        cin >> n;
        vector<pii> v(n);
        vector<pii> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i + 1;
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++)
        {
            x[i].first = v[i].second;
            x[i].second = i + 1;
        }
        sort(x.begin(), x.end());
        for (int i = 0; i < n; i++)
        {
            cout << x[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}