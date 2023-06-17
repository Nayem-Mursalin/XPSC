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

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        string ch;
        cin >>
            ch;
        if (
            (ch[0] == 89 || ch[0] == 121) &&
            (ch[1] == 69 || ch[1] == 101) &&
            (ch[2] == 83 || ch[2] == 115))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}