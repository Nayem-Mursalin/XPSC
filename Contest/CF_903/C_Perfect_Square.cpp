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
        int n, tmp, mx;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<vi> x(n, vi(n, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                x[i][j] = v[i][j] - 'a';
            }
        }

        int ans = 0;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n / 2; j++)

            // for (int j = i; j < n - i - 1; j++)
            {
                // char ch = max({v[i][j], v[n - 1 - i][n - 1 - j], v[n - 1 - i][j], v[i][n - 1 - j]});
                // ans += (mx - x[i][j] + mx - x[n - 1 - i][j] + mx - x[i][n - 1 - j] + mx - x[n - 1 - i][n - 1 - j]);
                mx = max(max(x[i][j], x[n - 1 - j][i]), max(x[j][n - 1 - i], x[n - 1 - i][n - 1 - j]));
                ans += (mx * 4) - (x[i][j] + x[n - 1 - j][i] + x[j][n - 1 - i] + x[n - 1 - i][n - 1 - j]);
                // ans += x[i][j] + x[n - 1 - i][j] + x[i][n - 1 - j] + x[n - 1 - i][n - 1 - j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}