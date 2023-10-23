#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    ll sq = sqrt(n), ans = n;

    for (ll i = 2; i <= sq; i++)
    {
        if (n % i == 0)
        {
            if (lcm(i, n / i) == n)
            {
                ans = min(ans, max(i, n / i));
            }
        }
    }

    cout << n / ans << " " << ans << endl;

    return 0;
}