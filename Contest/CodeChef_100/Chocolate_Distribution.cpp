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
        int n, a, b, c;
        cin >> n;
        if (n & 1)
        {
            c = 1;
            b = (n - 1) / 2;
            a = (n - 1) / 2;
        }
        else
        {
            c = 1;
            b = 1;
            a = (n - 2);
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}