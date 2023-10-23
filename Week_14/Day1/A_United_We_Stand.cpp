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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> b;
        vector<int> c;

        b.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[0])
            {
                b.push_back(v[i]);
            }
            else
            {
                c.push_back(v[i]);
            }
        }

        if (b.size() && c.size())
        {
            cout << b.size() << " " << c.size() << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}