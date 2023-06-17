#include <bits/stdc++.h>
using namespace std;
int n[26] = {0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        n[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (n[i] == 0)
        {
            char ch = n[i] + 97;
            cout << ch << endl;
            break;
        }
    }

    cout << endl;
}