#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n, sum, total = 0, ans;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    sum = (n * (n + 1)) / 2;
    ans = sum - total;
    cout << ans << endl;

    return 0;
}