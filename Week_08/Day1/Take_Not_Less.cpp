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
        ll n, mx = 0, count = 0;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == mx)
            {
                count++;
            }
        }
        if (count & 1)
        {
            cout << "Marichka" << endl;
        }
        else
        {
            map<int, int> mp;
            for (int i = 0; i < n; i++)
            {
                mp[v[i]]++;
            }
            bool check = true;
            for (auto i : mp)
            {
                if (i.second % 2)
                {
                    check = false;
                    break;
                }
            }
            if (check)
                cout << "Zenyk" << endl;
            else
                cout << "Marichka" << endl;
        }
    }
    return 0;
}