#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0;
    cin >> n;
    vector<string> v(n);
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i].size() % 2 == 0)
        {
            int a = 0, b = 0;
            for (int j = 0, k = v[i].size() / 2; j < v[i].size() / 2; j++)
            {
                a += v[i][j] - '0';
                b += v[i][k] - '0';
            }
            if (check and a == b)
            {
                ans++;
            }
            else if (a == b)
            {
                check = true;
            }
            else
            {
                check = false;
            }
        }
    }
    cout << ans << endl;

    return 0;
}