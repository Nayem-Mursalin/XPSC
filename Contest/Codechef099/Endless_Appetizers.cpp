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
        int x, y, r, temp;
        cin >> x >> y >> r;
        temp = r / 30;
        x += temp;
        int ans = ceil((double)x / (double)y);
        cout << ans << endl;
    }
    return 0;
}