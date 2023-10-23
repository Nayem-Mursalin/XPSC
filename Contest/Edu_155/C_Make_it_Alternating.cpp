#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

const ll M = 998244353;

ll fac(ll n)
{
    if (n == 0)
    {
        return 1;
    }
    ll ans = 1;
    for (ll i = 2; i <= n; i++)
    {
        (ans *= i) %= M;
    }
    return ans % M;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        ll n = s.size(), tmp = 0, total = 0;
        vector<ll> adj;
        bool check = false;
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                check = true;
                tmp++;
                total++;
            }
            else
            {
                check = false;
                if (tmp > 0)
                {
                    adj.push_back(tmp + 1);
                }

                tmp = 0;
            }
        }
        if (check)
        {
            adj.push_back(tmp + 1);
        }

        n = adj.size();
        ll per = 1, sum = 0;

        // for (int i = 0; i < n; i++)
        // {
        //     per = 1;
        //     for (int j = 2; j <= adj[i]; j++)
        //     {
        //         per = (per * j) % M;
        //     }

        //     (sum += per % M);
        // }

        for (int i = 0; i < n; i++)
        {
            sum += adj[i];
        }

        per = fac(sum) % M;

        // for (int i = 0; i < n; i++)
        // {
        //     cout << adj[i] << " ";
        // }
        // cout << endl;

        cout << total << " " << per << endl;
    }
    return 0;
}