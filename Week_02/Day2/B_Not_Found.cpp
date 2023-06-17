#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n[150];
    for (int i = 0; i < 150; i++)
    {
        n[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        n[s[i]] = 1;
    }
    for (int i = 97; i <= 122; i++)
    {
        if (n[i] == 0)
        {
            char ch = i;
            cout << ch;
            break;
        }
        if (i == 122)
        {
            cout << "None";
        }
    }

    cout << endl;
}