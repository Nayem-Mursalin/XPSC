#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t, ans = 0;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
        if (v[i] % t == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}