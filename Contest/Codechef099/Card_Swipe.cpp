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
        int n, count = 0, mx = 0;
        cin >> n;
        vector<int> v(n);
        vector<int> x(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            x[v[i]]++;
            if (x[v[i]] & 1)
            {
                count++;
            }
            else
            {
                count--;
            }
            mx = max(mx, count);
        }
        cout << mx << endl;
    }
    return 0;
}