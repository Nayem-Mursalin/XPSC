#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int x, n, y, ans = 1;
    cin >> x >> y;
    n = x;
    while (n <= y)
    {
        if (n * 2 <= y)
        {
            ans++;
        }
        n *= 2;
    }
    cout << ans << endl;

    return 0;
}