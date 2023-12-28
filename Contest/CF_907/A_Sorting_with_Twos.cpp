#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>
#define vi vector<int>

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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (n < 4)
        {
            cout << "YES" << endl;
            continue;
        }
        bool check = true;
        if (v[3] > v[4])
        {
            cout << "NO" << endl;
            // check = false;
            continue;
        }

        // for 8
        for (int i = 5; i < n and i < 8; i++)
        {
            if (v[i] > v[i + 1])
            {
                // cout << "NO" << endl;
                check = false;
                break;
            }
        }
        // for 16
        for (int i = 9; i < n and i < 16; i++)
        {
            if (v[i] > v[i + 1])
            {
                // cout << "NO" << endl;
                check = false;
                break;
            }
        }
        // for 20
        for (int i = 17; i < n; i++)
        {
            if (v[i] > v[i + 1])
            {
                // cout << "NO" << endl;
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