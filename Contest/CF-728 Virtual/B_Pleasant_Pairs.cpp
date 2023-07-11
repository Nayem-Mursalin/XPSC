#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647
#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    ll two = 2;
    cin >> T;
    while (T--)
    {
        int n;
        ll count = 0;
        cin >> n;
        vector<pii> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i + 1;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                ll temp = v[i].first * v[j].first;
                if (temp > (two * n))
                {
                    break;
                }
                else if (temp == (v[i].second + v[j].second))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}