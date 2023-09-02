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
        vector<int> v(n);
        cin >> v[0];
        int ans = 1;
        int isup = 12;
        for (int i = 1; i < n; i++)
        {
            cin >> v[i];
            if (isup == 12)
            {
                if (v[i] - v[i - 1] > 0)
                {
                    ans++;
                    isup = 1;
                }
                else if (v[i] - v[i - 1] < 0)
                {
                    ans++;
                    isup = 0;
                }
            }
            else if (isup == 1 && v[i] - v[i - 1] < 0)
            {
                ans++;
                isup = 0;
            }
            else if (isup == 0 && v[i] - v[i - 1] > 0)
            {
                ans++;
                isup = 1;
            }
            else if (i == n - 1 and (isup == 1 && v[i] - v[i - 1] > 0) and (isup == 0 && v[i] - v[i - 1] < 0))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}