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
        ll n, k, x;
        cin >> n >> k;
        x = n - 1;
        vector<ll> v(n);
        set<ll> s;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < k; i++)
        {
            if (v[x] > n)
            {
                check = false;
                break;
            }
            if (s.count(x))
            {
                break;
            }

            s.insert(x);
            x = (n + x - v[x]) % n;
        }
        if (check)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}