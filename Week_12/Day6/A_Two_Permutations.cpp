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
        int n, a, b;
        cin >> n >> a >> b;
        cout << ((a + b <= n - 2 or (a == n and b == n)) ? "Yes" : "No") << endl;
    }
    return 0;
}