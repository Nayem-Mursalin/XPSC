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
        int n, ans = maxint;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for (int i = 1; i < n - 1; i++)
        {
            int j = i - 1, k = i + 1;
            while (j > -1 && k < n)
            {
                ans = min(ans, abs(v[j] + v[k] - 2 * v[i]));
                if (v[i] - v[j] < v[k] - v[i])
                {
                    j--;
                }
                else
                {
                    k++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}