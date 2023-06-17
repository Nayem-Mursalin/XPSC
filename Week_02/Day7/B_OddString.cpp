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

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (!(i & 1))
        {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}