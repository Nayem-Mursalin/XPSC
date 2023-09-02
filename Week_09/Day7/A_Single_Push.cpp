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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int diff = 0;
        bool check = true;
        int i = 0, m = -1;
        for (i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (b[i] < a[i])
                {
                    check = false;
                    break;
                }
                m = i;
                diff = b[i] - a[i];
                break;
            }
        }
        for (i = m; i < n; i++)
        {
            if (a[i] == b[i])
            {
                break;
            }
            a[i] += diff;
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                check = false;
                break;
            }
        }

        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}