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
        int k, n;
        cin >> k >> n;
        int x = 1, diff = 0;
        for (int i = 1; i <= k; i++)
        {
            cout << x << " ";
            diff++;
            if (x + diff <= n - (k - i - 1))
            {
                x += diff;
            }
            else
            {
                x++;
            }
        }
        cout << endl;
    }
    return 0;
}