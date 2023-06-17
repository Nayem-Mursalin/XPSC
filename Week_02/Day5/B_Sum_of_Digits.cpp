#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int step = 0, sz, ans = 0;

void func(string s)
{
    sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        ans += (s[i] - '0');
    }
    step++;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;

    cin >> s;
    if (s.size() > 1)
    {
        func(s);
    }

    while (ans > 9)
    {
        string x = to_string(ans);
        ans = 0;
        func(x);
    }
    cout << step << endl;
    return 0;
}