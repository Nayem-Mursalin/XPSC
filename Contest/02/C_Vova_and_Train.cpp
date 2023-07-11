#include <bits/stdc++.h>
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
        int L, v, l, r, n, a, b, ans;
        cin >> L >> v >> l >> r;
        n = L / v;
        a = (l - 1) / v;
        b = r / v;
        ans = n + a - b;
        cout << ans << endl;
    }
    return 0;
}