#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

int solve(int ans)
{
    int cnt = 0;
    while (ans > 0)
    {
        ans = ans / 2;
        cnt++;
    }
    return cnt;
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
        int n = s.size();
        int ans = n;
        for (int i = 0; i < 26; i++)
        {
            char ch = ('a' + i);
            int len = 0;
            int res = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == ch)
                {
                    res = max(res, len);
                    len = 0;
                }
                else
                {
                    len++;
                }
            }
            res = max(res, len);
            ans = min(ans, res);
        }
        cout << solve(ans) << endl;
    }

    return 0;
}
