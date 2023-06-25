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
        string s;
        cin >> s;
        int i = 0, n = s.size(), temp = 0, count = 0;
        set<char> c;
        for (int i = 0; i < n; i++)
        {
            c.insert(s[i]);
            if (c.size() > 3)
            {
                c.clear();
                count++;
                c.insert(s[i]);
            }
        }
        if (c.size())
        {
            count++;
        }

        cout << count << endl;
    }
    return 0;
}