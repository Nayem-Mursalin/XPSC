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
        int n, m, ans = maxint, sum, a, b, tmp;
        cin >> n >> m;
        string s, k;
        cin >> s >> k;
        vector<int> x(n);
        vector<int> y(n);
        for (int i = 0; i < n; i++)
        {
            x[i] = s[i] - '0';
        }
        for (int i = 0; i < m; i++)
        {
            y[i] = k[i] - '0';
        }

        for (int i = 0; i < n - m + 1; i++)
        {
            sum = 0;
            for (int j = 0; j < m; j++)
            {
                a = x[i + j];
                b = y[j];
                tmp = max(a, b) - min(a, b);
                sum += min(tmp, 10 - tmp);
            }
            ans = min(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}