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
        ll n, ans = 0;
        cin >> n;

        while (n > 0)
        {
            ans += n;
            n = n / 2;
        }
        cout << ans << endl;
    }
    return 0;
}