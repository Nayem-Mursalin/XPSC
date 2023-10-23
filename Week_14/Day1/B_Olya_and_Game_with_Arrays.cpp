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
        ll total = 0;
        int mn = maxint;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vector<int> t(x);
            for (int j = 0; j < x; j++)
            {
                cin >> t[j];
            }
            sort(t.begin(), t.end());

            if (x == 1)
            {
                cout << endl;
                total += t[0];
            }
            else
            {
                mn = min(mn, t[0]);
                v.push_back(t[1]);
            }
        }
        total += mn;

        sort(v.begin(), v.end());

        for (int i = 1; i < v.size(); i++)
        {
            total += v[i];
        }
        cout << total << endl;
    }
    return 0;
}