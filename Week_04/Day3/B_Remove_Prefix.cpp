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

    int T;
    cin >> T;
    while (T--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> v(n);
        vector<int> c((n + 1), 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        reverse(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            c[v[i]]++;
            if (c[v[i]] > 1)
            {
                ans = n - i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}