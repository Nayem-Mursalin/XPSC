#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

ll fact(ll n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, r;
    cin >> n;
    r = n / 2;
    ll ans = fact(r - 1) * fact(r - 1) * (fact(n) / (fact(r) * fact(n - r))) / 2;
    cout << ans << endl;
    return 0;
}