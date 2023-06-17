#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        long long int n;
        long long int ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            ans += (3 * i - 2);
            if (i > 2)
            {
                ans += (i - 2);
            }
        }

        cout << ans << endl;
    }
}