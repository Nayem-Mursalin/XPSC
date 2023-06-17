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
        int n, ans = -1;
        cin >> n;
        vector<int> v(n);
        vector<int> count(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            count[v[i]]++;
            if (count[v[i]] > 2)
            {
                ans = v[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}