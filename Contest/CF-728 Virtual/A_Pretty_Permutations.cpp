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
        if (n & 1)
        {
            for (int i = 1; i <= n - 3; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << n << " " << n - 2 << " " << n - 1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}