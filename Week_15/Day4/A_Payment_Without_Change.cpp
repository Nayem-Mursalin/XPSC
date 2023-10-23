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
        ll a, b, n, s, total;
        cin >> a >> b >> n >> s;
        bool check = true;
        total = a * n + b;
        int rem = s % n;
        if ((rem <= b and total >= s))
        {
            check = true;
        }
        else
            check = false;

        cout << ((check) ? "YES" : "NO") << endl;
    }
    return 0;
}