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

    int T;
    cin >> T;
    while (T--)
    {
        int n, r = 0, b = 0;
        cin >> n;
        string s;
        cin >> s;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                b++;
            }
            else if (s[i] == 'R')
            {
                r++;
            }
            else
            {
                if (min(r, b) == 0 && max(r, b) != 0)
                {
                    check = false;
                    break;
                }
                r = 0, b = 0;
            }
        }
        if (min(r, b) == 0 && max(r, b) != 0)
        {
            check = false;
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