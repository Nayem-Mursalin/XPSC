#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

ll sumDigit(ll x)
{
    ll sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, s;
    cin >> n >> s;
    ll high = n, low = 0, ans = 0;
    while (high >= low)
    {
        ll mid = low + (high - low) / 2;
        if (mid - sumDigit(mid) >= s)
        {
            ans = n - mid + 1;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << ans << endl;
    return 0;
}