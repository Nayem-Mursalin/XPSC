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
        string s, t;
        cin >> s >> t;
        bool check = false;
        int n = s.size() - 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && t[i] == '0' && s[i + 1] == '1' && t[i + 1] == '1')
            {
                check = true;
                break;
            }
        }
        cout << (check ? "YES" : "NO") << endl;
    }
    return 0;
}