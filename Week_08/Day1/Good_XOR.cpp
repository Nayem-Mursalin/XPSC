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
        int n, ans = 0, one = 0, zero = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                one++;
            else
                zero++;
        }
        if (one == 0 || zero == 0 || n & 1)
        {
            cout << -1 << endl;
            continue;
        }
        if (zero > one)
            ans = (n / 2) - min(one, zero);
        else
        {
            int diff = one - zero;
            ans = diff / 4;
            if (diff % 4 == 2)
            {
                ans += 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}