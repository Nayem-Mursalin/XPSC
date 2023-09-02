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
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        if (k == 1)
        {
            cout << 0 << endl;
            continue;
        }
        vector<bool> check(n, true);
        v[0] = false;

        for (int i = 1; i <= n; i++)
        {
            int obj = i + 1;
            int xtra = 0;

            for (int j = i + i + 1; j < n; j += i)
            {
                if (v[j] != obj)
                {
                    xtra++;
                    if (xtra > 1)
                    {
                        check[i] = false;
                        break;
                    }
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (check[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}