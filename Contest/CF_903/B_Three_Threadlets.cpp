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
        vector<ll> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        ll div = 0;
        bool a = false, b = false;
        if (v[1] % v[0] == 0)
        {
            div += v[1] / v[0] - 1;
            a = true;
        }
        if (v[2] % v[0] == 0)
        {
            div += v[2] / v[0] - 1;
            b = true;
        }
        if (a and b and div < 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}