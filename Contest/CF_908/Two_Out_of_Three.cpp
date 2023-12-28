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

    int T;
    cin >> T;
    while (T--)
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> v(n);
        vector<int> b(n, 1);
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]].push_back(i);
        }
        for (auto &&it : m)
        {
            if (it.second.size() > 2)
            {
                b[it.second[1]] = 2;
                b[it.second[2]] = 3;
                cnt = 3;
                break;
            }
            else if (it.second.size() == 2)
            {
                if (cnt == 0)
                {
                    b[it.second[1]] = 2;
                    cnt++;
                }
                else if (cnt == 1)
                {
                    b[it.second[1]] = 3;
                    cnt++;
                }
            }
        }
        if (cnt < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}