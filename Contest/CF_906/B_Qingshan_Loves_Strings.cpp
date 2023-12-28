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
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        // cout << s << " " << t << endl;
        vector<int> v(2, 0);
        bool initial = true;
        char tmp_char;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                initial = false;
                (s[i] == '0' ? v[0]++ : v[1]++);
                tmp_char = s[i];
            }
        }
        if (initial)
        {
            cout << "YES" << endl;
            continue;
        }
        if (v[0] != 0 and v[1] != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (t.size() == 1 and tmp_char != t[0])
        {
            cout << "YES" << endl;
            continue;
        }
        initial = true;
        for (int i = 0; i < m - 1; i++)
        {
            if (t[i] == t[i + 1])
            {
                initial = false;
            }
        }
        if (t[0] != t[m - 1])
        {
            initial = false;
        }

        if (!initial)
        {
            cout << "NO" << endl;
            continue;
        }
        if (tmp_char == t[0])
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            continue;
        }
    }
    return 0;
}