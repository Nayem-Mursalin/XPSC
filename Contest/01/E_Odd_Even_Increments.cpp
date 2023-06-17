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
        int n, l, r;
        cin >> n;
        bool odd = true, evn = true;
        vector<int> v(n);
        cin >> v[0] >> v[1];

        for (int i = 2; i < n; i++)
        {
            cin >> v[i];
            if (i & 1)
            {
                if ((v[i] & 1) != (v[1] & 1))
                {
                    odd = false;
                }
            }
            else
            {
                if ((v[i] & 1) != (v[0] & 1))
                {
                    evn = false;
                }
            }
        }
        if (evn && odd)
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