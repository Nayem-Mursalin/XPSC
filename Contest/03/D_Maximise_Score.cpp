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
        ll n, minn;
        cin >> n;
        vector<int> v(n);
        vector<int> temp(n);
        cin >> v[0];
        for (int i = 1; i < n; i++)
        {
            cin >> v[i];
        }
        temp[0] = abs(v[0] - v[1]);
        temp[n - 1] = abs(v[n - 1] - v[n - 2]);
        minn = min(temp[0], temp[n - 1]);

        for (int i = 1; i < n - 1; i++)
        {
            temp[i] = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
            if (temp[i] < minn)
            {
                minn = temp[i];
            }
        }
        cout << minn << endl;
    }
    return 0;
}