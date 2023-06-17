#include <bits/stdc++.h>
#include <iostream>
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
        int n, m;
        cin >> n >> m;
        string s[n];
        vector<int> x(n, 0);
        int ans = MAXint, diff;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                diff = 0;
                for (int k = 0; k < m; k++)
                {
                    diff += abs(s[i][k] - s[j][k]);
                }
                ans = min(ans, diff);
            }
        }

        cout << ans << endl;
    }
    return 0;
}