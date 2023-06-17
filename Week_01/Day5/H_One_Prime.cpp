#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool check = false;

    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            check = true;
            break;
        }
    }

    cout << ((check) ? "NO" : "YES") << endl;

    return 0;
}