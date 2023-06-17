#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> k >> n;
        if (k > n)
        {
            swap(n, k);
        }

        ll sum1 = (k * (k - 1)) / 2;
        ll sum2 = (n * (n + 1)) / 2;
        ll sum = sum2 - sum1;
        cout << sum << endl;
    }
    cout << endl;

    return 0;
}