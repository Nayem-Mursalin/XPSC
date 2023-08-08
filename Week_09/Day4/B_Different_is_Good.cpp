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

    int n, ans = -1;
    cin >> n;
    string s;
    cin >> s;
    if (n <= 26)
    {
        ans = 0;
        vector<int> v(26, 0);
        for (int i = 0; i < n; i++)
        {
            v[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (v[i] > 1)
            {
                ans += v[i] - 1;
            }
        }
    }
    cout << ans << endl;

    return 0;
}