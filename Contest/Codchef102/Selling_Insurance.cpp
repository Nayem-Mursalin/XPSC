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
        float n, ans;
        cin >> n;
        ans = n / 5.0;
        ans = ceil(100 / ans);
        cout << (int)ans << endl;
    }
    return 0;
}