#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>
#define vi vector<int>

int lb(vector<int> v, int n, int hi, int lo)
{
    int ans = -1;
    while (lo <= hi)
    {
        int mid_index = (hi + lo) / 2;
        int mid_val = v[mid_index];

        if (mid_val < n)
        {
            lo = mid_index + 1;
        }
        else
        {
            ans = mid_index;
            hi = mid_index - 1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q, i = 1, a;

    while ((cin >> n >> q) && (n != 0 and q != 0))
    {
        cout << "CASE# " << i++ << ":\n";
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for (int x = 0; x < q; x++)
        {
            cin >> a;
            if (find(v.begin(), v.end(), a) == v.end())
            {
                cout << a << " not found\n";
            }
            else
            {
                // int ans = (lower_bound(v.begin(), v.end(), a) - v.begin());
                int ans = lb(v, a, n - 1, 0);
                cout << a << " found at " << ans + 1 << endl;
            }
        }
    }
    return 0;
}