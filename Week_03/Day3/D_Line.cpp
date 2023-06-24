#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

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
        string s;
        cin >> s;

        vector<ll> ans(n);
        ll total = 0;
        int chng = 0;

        for (int i = 0; i < n; i++)
        {
            ll l = i;
            ll r = n - i - 1;
            if (s[i] == 'L')
            {
                if (l < r)
                {
                    chng++;
                    total += r;
                    ans.push_back(r - l);
                }
                else
                {
                    total += l;
                }
            }
            else
            {
                if (l > r)
                {
                    chng++;
                    total += l;
                    ans.push_back(l - r);
                }
                else
                {
                    total += r;
                }
            }
        }
        vector<ll> x(n + 1);

        for (int i = chng; i <= n; i++)
        {
            x[i] = total;
        }

        sort(ans.begin(), ans.end(), greater<ll>());

        for (int i = chng - 1; i >= 1; i--)
        {
            total -= ans.back();
            ans.pop_back();
            x[i] = total;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << x[i] << " ";
        }

        cout << endl;
    }
    return 0;
}