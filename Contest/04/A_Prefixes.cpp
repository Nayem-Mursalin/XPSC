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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0, ans = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == 'a' && s[i + 1] == 'a')
        {
            s[i + 1] = 'b';
            ans++;
        }
        else if (s[i] == 'b' && s[i + 1] == 'b')
        {
            s[i + 1] = 'a';
            ans++;
        }
    }

    cout << ans << endl;
    cout << s << endl;

    return 0;
}