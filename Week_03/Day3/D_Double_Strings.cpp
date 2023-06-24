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
        int n;
        cin >> n;
        vector<string> v(n);
        set<string> s;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }

        for (int i = 0; i < n; i++)
        {
            int sz = v[i].size();
            for (int j = 1; j < sz; j++)
            {
                string s1 = v[i].substr(0, j);
                string s2 = v[i].substr(j, sz - j);
                if (s.find(s1) != s.end() && s.find(s2) != s.end())
                {
                    a[i] = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }

        cout << endl;
    }
    return 0;
}