#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            count++;
        }
    }

    cout << count << endl;
}