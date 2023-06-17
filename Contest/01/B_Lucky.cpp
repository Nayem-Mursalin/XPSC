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
        int lef = 0, rig = 0;
        string s;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            lef += (s[i] - '0');
        }
        for (int i = 3; i < 6; i++)
        {
            rig += (s[i] - '0');
        }
        if (lef == rig)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}