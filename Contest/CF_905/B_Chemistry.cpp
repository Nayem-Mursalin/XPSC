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
        int n, k, rem = 0, two = 0, mul = 0, one;
        cin >> n >> k;
        string s;
        cin >> s;
        bool check = true;
        vector<int> v(26, 0);
        for (int i = 0; i < n; i++)
        {
            v[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (v[i] & 1)
            {
                rem++;
                if (v[i] == 1)
                {
                    one++;
                }
            }
            if (v[i] == 2)
            {
                two++;
            }
            if (v[i] > 2)
            {
                mul += (v[i] / 2);
            }
        }

        if ((n - k) / 2 > (two + mul))
        {
            check = false;
        }

        cout << (check ? "YES" : "NO") << endl;
    }
    return 0;
}