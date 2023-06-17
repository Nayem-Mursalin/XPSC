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
        int n, x;
        cin >> n;
        if (n <= 1399)
        {
            x = 4;
        }
        else if (n <= 1599)
        {
            x = 3;
        }
        else if (n <= 1899)
        {
            x = 2;
        }
        else
        {
            x = 1;
        }
        cout << "Division " << x << endl;
    }
    return 0;
}