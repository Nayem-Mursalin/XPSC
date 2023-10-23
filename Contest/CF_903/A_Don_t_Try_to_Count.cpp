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
        int n, m, ans = -1;
        ;
        cin >> n >> m;
        string s, x;
        cin >> s >> x;

        for (int i = 0; i < 10; i++)
        {
            if (s.find(x) != -1)
            {
                ans = i;
                break;
            }
            s += s;
        }
        cout << ans << endl;
    }
    return 0;
}