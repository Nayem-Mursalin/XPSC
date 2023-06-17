#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, maxx = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maxx = max(maxx, v[i]);
    }
    int mxcnt = 0, ans, count;
    for (int i = 2; i <= maxx; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] % i == 0)
            {
                count++;
                if (count >= mxcnt)
                {
                    mxcnt = count;
                    ans = i;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}