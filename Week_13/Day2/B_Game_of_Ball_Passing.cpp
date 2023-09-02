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
        int n;
        cin >> n;
        vector<int> v(n);
        ll sum = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] > mx)
            {
                mx = v[i];
            }
        }
        if (sum == 0)
        {
            cout << 0 << endl;
            continue;
        }
        sum -= mx;
        if (mx > sum)
        {
            cout << mx - sum << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}