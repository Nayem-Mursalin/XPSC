#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int point[3];
        string s[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                mp[s[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            point[i] = 0;
            for (int j = 0; j < n; j++)
            {
                if (mp[s[i][j]] == 1)
                {
                    point[i] += 3;
                }
                else if (mp[s[i][j]] == 2)
                {
                    point[i]++;
                }
            }
            cout << point[i] << " ";
        }
        cout << endl;
    }
}