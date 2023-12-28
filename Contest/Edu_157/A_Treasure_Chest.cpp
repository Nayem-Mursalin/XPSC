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
        int x, y, k, ans;
        cin >> x >> y >> k;
        if (x >= y)
        {
            ans = x;
        }
        else if (x + k >= y)
        {
            ans = y;
        }
        else
        {
            ans = x + k + (2 * (y - (k + x)));
        }
        cout << ans << endl;
    }
    return 0;
}