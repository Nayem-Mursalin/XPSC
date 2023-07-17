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
        int n, ans = 0, temp;
        cin >> n;
        while (n != 50)
        {
            ans++;
            if (n > 50)
                n -= 3;
            else
                n += 2;
        }
        cout << ans << endl;
    }
    return 0;
}