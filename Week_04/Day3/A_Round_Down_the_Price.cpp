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
        int n;
        cin >> n;
        int ans = 1e9;
        while (n < ans)
        {
            ans = ans / 10;
        }
        ans = n - ans;
        cout << ans << endl;
    }
    return 0;
}