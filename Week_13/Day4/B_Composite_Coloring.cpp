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
    int prime[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n), vis(1002, 1);
        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]] = -1;
        }

        int y = 1, x = 0;
        for (int i = 2; i * i <= 1000; i++)
        {
            if (vis[i])
            {
                x = 0;

                for (int j = i * 2; j <= 1000; j += i)
                {
                    vis[j] = 0;
                    if (m[j] == -1)
                    {
                        m[j] = y;
                        x = 1;
                    }
                }
                if (x)
                {
                    y++;
                }
            }
        }

        cout << y - 1 << endl;

        for (int i = 0; i < n; i++)
        {
            cout << m[v[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}