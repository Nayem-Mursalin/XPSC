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

    string s, t;
    cin >> s >> t;
    int ans = max(s.size(), t.size());
    if (s.compare(t) == 0)
        ans = -1;
    cout << ans << endl;
    return 0;
}