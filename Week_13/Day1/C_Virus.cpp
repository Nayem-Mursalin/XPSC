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
        ll n, m;
        cin >> n >> m;
        vector<ll> v(m);
        vector<ll> gap;

        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (m == 1)
            gap.push_back(n - 1);
        else
        {
            gap.push_back((v[0] - 1) + (n - v[m - 1]));
            for (int i = 1; i < m; i++)
            {
                gap.push_back(v[i] - v[i - 1] - 1);
            }
        }
        sort(gap.rbegin(), gap.rend());

        ll safe = 0, affected = 0;

        for (int i = 0; i < gap.size(); i++)
        {

            int x = gap[i];
            x -= (affected * 2);
            if (x <= 0)
                break;
            safe += (x - 1);
            if (x == 1)
                safe++;
            affected += 2;
        }

        cout << n - safe << endl;
    }
    return 0;
}