#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<char, int> charcounter;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        if (charcounter.find(c) != charcounter.end())
        {
            charcounter[c] += 1;
        }
        else
        {
            charcounter[c] = 1;
        }
    }
    for (auto it : charcounter)
    {

        cout << it.first << ' ' << it.second << endl;
    }

    return 0;
}