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
        string s;
        cin >> s;
        char tmp = '1';
        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            if (s[i] == '0' and tmp == '0')
            {
                ans++;
                // cout << 1 << endl;
            }
            else if (s[i] == '0')
            {
                ans += ('9' - tmp) + 2;
                // cout << ('9' - tmp) << endl;
            }
            else
            {
                if (tmp == '0')
                {
                    ans += ('9' - s[i]) + 2;
                    // cout << ('9' - s[i]) + 1 << endl;
                }
                else
                {
                    ans += abs(s[i] - tmp) + 1;
                    // cout << abs(s[i] - tmp) << endl;
                }
            }
            tmp = s[i];
            // cout << ans << " ";
        }
        cout << ans << endl;
    }
    return 0;
}