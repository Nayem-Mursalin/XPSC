#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n + 1);
        map<int, vi> ind;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ind[v[i]].push_back(i);
        }
        while (m--)
        {
            int a, b;
            cin >> a >> b;
            bool check = false;
            if (a == b)
            {
                check = true;
            }
            else if (ind[a].empty() || ind[b].empty())
            {
                check = false;
            }

            else if (ind[a].front() < ind[b].back())
            {
                check = true;
            }

            if (check)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}