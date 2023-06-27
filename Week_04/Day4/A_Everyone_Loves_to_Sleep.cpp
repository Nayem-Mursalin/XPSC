#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647
#define pint pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n, H, M;
        cin >> n >> H >> M;
        pair<int, int> p;
        p.first = H, p.second = M;
        vector<pint> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end());
        int u = upper_bound(v.begin(), v.end(), p) - v.begin();
        int l = upper_bound(v.begin(), v.end(), p) - v.begin();
        if (u != l)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            if (u == n)
            {
                int h = 23 - H, m = 60 - M;
                int min = v[0].second + m;
                int carry = min / 60;
                min = min % 60;
                int hour = v[0].first + carry + hour;

                cout << hour << " " << min << endl;
            }
            else
            {
                int f = 0;
                if (v[u].second < M)
                {
                    v[u].second += 60;
                    v[u].first--;
                    cout << v[u].first << " " << v[u].second - M << endl;
                }
            }
        }
    }
    return 0;
}