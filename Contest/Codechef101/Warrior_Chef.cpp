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
        int n, h, res = 0;
        cin >> n >> h;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++)
        {
            if (h - v[i] > 0)
            {
                h -= v[i];
            }
            else
            {
                res = v[i];
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}