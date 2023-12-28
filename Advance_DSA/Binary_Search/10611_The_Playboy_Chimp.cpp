#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>
#define vi vector<int>

int lower_bound(vector<int> v, int n, int hi, int lo)
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
    // cout << ans << endl;
    return ans;
}

int higher_bound(vector<int> v, int n, int hi, int lo)
{
    int ans = -1;
    while (lo <= hi)
    {
        int mid_index = (hi + lo) / 2;
        int mid_val = v[mid_index];

        if (mid_val <= n)
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

    int n, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int lo = lower_bound(v, x, n - 1, 0);
        int hi = higher_bound(v, x, n - 1, 0);
        if (lo == 0 or lo == n)
        {
            cout << "X ";
        }
        else if (lo == -1)
        {
            cout << v[n - 1] << " ";
        }

        else
        {
            cout << v[lo - 1] << " ";
        }
        if (hi == -1)
        {
            cout << "X" << endl;
        }
        else
        {
            cout << v[hi] << endl;
        }
    }

    return 0;
}