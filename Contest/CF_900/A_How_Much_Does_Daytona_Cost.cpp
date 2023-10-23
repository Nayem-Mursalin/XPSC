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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        bool check = false;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == k)
                check = true;
        }

        cout << (check ? "YES" : "NO") << endl;
    }

    return 0;
}