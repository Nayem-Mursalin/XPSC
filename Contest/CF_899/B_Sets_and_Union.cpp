#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>
#define vi vector<int>
#define umii unordered_map<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    vector<vi> v;
    map<int, vi> mp;

    while (T--)
    {
        int n, k, ans = 0;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            cin >> k;
            vector<int> a(k);
            for (int i = 0; i < k; i++)
            {
                cin >> a[i];
                mp[a[i]].push_back(i);
            }
            v.push_back(a);
        }
    }
    return 0;
}