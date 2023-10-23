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
        int n, nm = 0;
        cin >> n;
        bool check = true;
        vector<int>
            s(n), w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> w[i];
        }
        for (int i = 1; i < n; i++)
        {
            if ((s[i] >= s[0] and w[i] >= w[0]))
            {
                check = false;
            }
        }
        if (!check)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s[0] << endl;
        }
    }
    return 0;
}