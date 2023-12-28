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
        int n, sum = 0;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        bool check = true;

        if (mp.size() > 2)
        {
            check = false;
        }
        else if (mp.size() == 1)
        {
            check = true;
        }
        else if (mp.size() == 2)
        {
            sort(v.begin(), v.end());
            if (abs(mp[v[n - 1]] - mp[v[0]]) > 1)
            {
                check = false;
            }
        }
        cout << (check ? "YES" : "NO") << endl;
    }
    return 0;
}