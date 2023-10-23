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
        ll n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> v(n, true);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (v[i])
                {
                    ans += (i + 1);
                    v[i] = false;
                }

                for (int j = (i + 1) * 2 - 1; j < n; j += (i + 1))
                {
                    if (s[j] == '1')
                        break;
                    else
                    {
                        if (v[j])
                        {
                            ans += (i + 1);
                            v[j] = false;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}