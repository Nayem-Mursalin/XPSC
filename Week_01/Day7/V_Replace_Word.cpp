#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
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
        if (s[i] == 'E' &&
            s[i + 1] == 'G' &&
            s[i + 2] == 'Y' &&
            s[i + 3] == 'P' &&
            s[i + 4] == 'T')
        {
            cout << " ";
            i += 4;
        }
        else
            cout << s[i];
    }

    cout << endl;
}