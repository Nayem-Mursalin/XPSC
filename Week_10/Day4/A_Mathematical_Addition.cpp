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
        ll n, m;
        cin >> n >> m;
        cout << -(n * n) << " " << m * m << endl;
    }
    return 0;
}