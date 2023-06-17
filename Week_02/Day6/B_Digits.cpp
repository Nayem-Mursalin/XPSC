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

    int s, t;
    cin >> s >> t;
    int ans = 0;
    while (s != 0)
    {
        s = s / t;
        ans++;
    }
    cout << ans << endl;

    return 0;
}