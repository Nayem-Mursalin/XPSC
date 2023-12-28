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

    unsigned int T;
    cin >> T;
    while (T--)
    {
        unsigned int n, q;
        cin >> n >> q;
        vector<unsigned int> a(n);
        vector<unsigned int> x;
        for (unsigned int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int y;
        cin >> y;
        x.push_back(y);
        for (unsigned int i = 1; i < q; i++)
        {
            cin >> y;
            if (y < x.back())
            {
                x.push_back(y);
            }
        }
        for (unsigned int i = 0; i < n; i++)
        {
            for (unsigned int j = 0; j < x.size(); j++)
            {
                unsigned int temp = 1 << (x[j]);

                {
                    if ((a[i] & (temp - 1)) == 0)
                    {
                        a[i] |= 1 << (x[j] - 1);
                    }
                }
            }
        }
        for (unsigned int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}