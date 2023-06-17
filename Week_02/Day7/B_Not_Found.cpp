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
    vector<int> v(26, 0);
    int x = -1;
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
        {
            x = i;
            break;
        }
    }
    if (x != -1)
    {
        char ch;
        ch = x + 97;
        cout << ch << endl;
    }
    else
    {
        cout << "None" << endl;
    }

    return 0;
}