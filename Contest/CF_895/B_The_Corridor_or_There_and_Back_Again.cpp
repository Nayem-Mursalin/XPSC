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
        int n;
        cin >> n;
        vector<int> d(n);
        vector<int> s(n);
        int k = maxint;
        for (int i = 0; i < n; i++)
        {
            cin >> d[i] >> s[i];
            k = min(k, d[i] + (s[i] - 1) / 2);
        }
        cout << k << endl;
    }
    return 0;
}