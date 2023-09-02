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

    ll T;
    cin >> T;
    while (T--)
    {
        ll n, m, ans = 0, temp = 0, a, b, c;
        cin >> n >> m;
        if (m > n)
        {
            ans = 0;
            cout << ans << endl;
            break;
        }

        for (int i = 1; i <= 9; i++)
        {
            temp += i * m % 10;
        }
        a = n / m;
        b = a / 10;
        c = a % 10;
        ans = b * temp;

        for (int i = 1; i <= c; i++)
        {
            ans += i * m % 10;
        }

        cout << ans << endl;
    }
    return 0;
}