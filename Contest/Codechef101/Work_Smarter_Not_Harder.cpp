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
        int l, v1, v2, ans;
        cin >> l >> v1 >> v2;
        double t1, t2;
        t1 = ceil(l / ((1.0) * v1));
        t2 = ceil(l / ((1.0) * v2));
        if (t1 - t2 <= 0)
        {
            ans = -1;
        }
        else
        {
            ans = t1 - t2 - 1;
        }

        cout << ans << endl;
    }
    return 0;
}