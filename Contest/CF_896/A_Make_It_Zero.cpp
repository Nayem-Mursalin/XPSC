#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<pii> ans;

        for (int i = 0; i < n;)
        {
            int x = 0, k = i;
            for (int j = i; j < n; j++)
            {
                x ^= v[j];
                if (x == 0)
                    k = j;
            }
            if (i != k)
                ans.push_back(make_pair(i + 1, k + 1));
            i = k + 1;
        }

        cout << ans.size() << endl;

        for (auto an : ans)
        {
            cout << an.first << " " << an.second << endl;
        }

        // for (int i = 0; i < ans.size(); i++)
        // {
        //     cout << v[i].first + 1 << " " << v[i].second + 1 << endl;
        // }
    }

    return 0;
}
