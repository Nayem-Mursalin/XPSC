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
        string s;
        cin >> s;
        int i = 0;
        for (i = 0; i < n - 2; i++)
        {

            if (s[i] == '1')
            {
                cout << "100";

                i += 2;
            }
            else
            {
                cout << s[i];
            }
        }
        while (i < n)
        {
            cout << s[i];
            i++;
        }

        cout << endl;
    }
    return 0;
}