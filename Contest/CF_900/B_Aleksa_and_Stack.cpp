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
        ll n, a, b, c;
        cin >> n;
        cout << 2 << " " << 3 << " ";
        a = 2, b = a + 1, c = b + 1;
        for (int i = 2; i < n; i++)
        {
            c = b + 1;
            while ((3 * c) % (a + b) == 0)
            {
                c++;
            }
            a = b, b = c;
            cout << b << " ";
        }
        cout << "\n";
    }
    return 0;
}