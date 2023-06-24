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
        vector<int> v(n);
        ll ans = 0;
        int count = 0;
        bool pos = true;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans += abs(v[i]);
            if (v[i] < 0 && pos)
            {
                pos = false;
                count++;
            }
            else if (v[i] > 0)
            {
                pos = true;
            }
        }
        cout << ans << " " << count << endl;
    }
    return 0;
}