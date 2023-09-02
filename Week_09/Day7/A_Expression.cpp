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

    int a, b, c;
    cin >> a >> b >> c;
    int ans[6];
    ans[0] = (a + b) * c;
    ans[1] = (a * b) + c;
    ans[2] = a * b * c;
    ans[3] = a + (b * c);
    ans[4] = a + b + c;
    ans[5] = a * (b + c);
    sort(ans, ans + 6);
    cout << ans[5] << endl;

    return 0;
}