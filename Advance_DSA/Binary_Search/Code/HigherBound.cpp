#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>
#define vi vector<int>

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

    
    return 0;
}