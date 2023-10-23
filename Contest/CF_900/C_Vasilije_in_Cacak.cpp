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
        ll n, small, big, k, x;
        cin >> n >> k >> x;
        small = (k * (k + 1)) / 2;
        // big = (x / 2) * (2 * (n - k + 1) + (x - 1));
        big = (((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2));

        cout << ((x >= small and x <= big) ? "YES" : "NO") << endl;
    }
    return 0;
}