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
        if (n < 7 or n == 9)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int a, b, c;
            if (n % 3 == 0)
            {
                a = 1;
                b = 4;
                c = n - 5;
            }
            else
            {
                a = 1;
                b = 2;
                c = n - 3;
            }
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}
