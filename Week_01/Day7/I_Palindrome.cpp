#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{

    string s;
    cin >> s;
    int n = s.size() - 1;
    bool x = true;
    for (int i = 0, j = n; i <= n / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            x = false;
            break;
        }
    }
    cout << (x ? "YES" : "NO") << endl;

    return 0;
}