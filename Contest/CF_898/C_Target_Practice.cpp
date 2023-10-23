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
        int ans = 0;
        vector<string> v(10);
        for (int i = 0; i < 10; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (v[i][j] == 'X')
                {
                    if ((i == 0 or i == 9) or (j == 0 or j == 9))
                    {
                        ans++;
                    }
                    else if ((i == 1 or i == 8) or (j == 1 or j == 8))
                    {
                        ans += 2;
                    }
                    else if ((i == 2 or i == 7) or (j == 2 or j == 7))
                    {
                        ans += 3;
                    }
                    else if ((i == 3 or i == 6) or (j == 3 or j == 6))
                    {
                        ans += 4;
                    }
                    else if ((i == 4 or i == 5) or (j == 4 or j == 5))
                    {
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}