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
        int a, b, c, d;
        cin >> a >> b >> c;
        if (b < c)
        {
            d = c + (c - b);
        }
        else
        {
            d = b;
        }
        if (a > d)
        {
            cout << 2 << endl;
        }
        else if (a < d)
        {
            cout << 1 << endl;
        }
        else if (a == d)
        {
            cout << 3 << endl;
        }
    }
    return 0;
}