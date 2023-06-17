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

    int s, m, k;
    ll count = 0;
    cin >> m >> s;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            k = s - (i + j);
            if (k <= m && k >= 0)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}