#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        long long int ans = 0, dist = 1, temp;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++, dist++)
        {
            cin >> v[i];
            if (dist < v[i])
            {
                temp = v[i] - dist;
                dist += temp;
                ans += temp;
            }
        }
        cout << ans << endl;
    }
    return 0;
}