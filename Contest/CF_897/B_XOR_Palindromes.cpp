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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> ans(n + 1);
        int cnt = 0, a = 0, b = 0, i = 0, j = n - 1, v = 0;
        while (i < j)
        {
            if (s[i] != s[j])
                cnt++;
            if (s[i] == s[j] && (s[i] == '0'))
                a++;
            else if (s[i] == s[j] && (s[i] == '1'))
                b++;
            i++;
            j--;
        }
        if (cnt == 0)
            ans[0] = 1;
        if (n & 1)
            v++;
        for (int i = 1; i <= n; i++)
        {
            if (cnt > i)
                continue;
            int y = i - cnt;
            if ((y > (a * 2 + b * 2) + v))
                continue;
            if (y & 1)
            {
                if (n % 2 == 0)
                    continue;
                else
                    ans[i] = 1;
            }
            else
                ans[i] = 1;
        }
        string sol;
        for (int i = 1; i <= n + 1; i++)
        {
            sol.push_back(ans[i - 1] + '0');
        }

        cout << sol << endl;
    }

    return 0;
}