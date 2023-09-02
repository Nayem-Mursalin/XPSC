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
        string s;
        cin >> s;
        int n = s.size(), ans = 0, temp = 0;
        bool is_inserted = false, check = true, sorted = false, unchanged = false;
        char ch;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
            {
                ans++;
                is_inserted = true;
                if (s[i + 1] == '-')
                {
                    ans--;
                    unchanged = true;
                    i++;
                }
                else
                {
                    unchanged = false;
                }
            }
            else if (s[i] == '-')
            {
                ans--;
            }
            else if (s[i] == '1')
            {
                sorted = true;
                is_inserted = false;
                if (unchanged && ch == '0')
                {
                    check = false;
                }

                temp = ans;
                ch = '1';
            }
            else if (s[i] == '0')
            {
                sorted = false;
                if (ans < 2)
                {
                    check = false;
                }

                else if (!is_inserted)
                {
                    check = false;
                }
                if (unchanged && ch == '1')
                {
                    check = false;
                }

                ch = '0';
            }
        }

        cout << (check ? "YES" : "NO") << endl;
    }
    return 0;
}