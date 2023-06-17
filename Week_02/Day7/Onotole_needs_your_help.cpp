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

    int n;
    cin >> n;
    vector<int> v(n);
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        res ^= v[i];
    }
    cout << res << endl;
    return 0;
}