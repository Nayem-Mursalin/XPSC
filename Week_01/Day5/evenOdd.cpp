#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, post = 0, neg = 0, evn = 0, odd = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            post++;
        }
        else if (a[i] < 0)
        {
            neg++;
        }

        (a[i] & 1) ? odd++ : evn++;
    }

    cout << "Even: " << evn << "\nOdd: " << odd << "\nPositive: " << post << "\nNegative: " << neg << endl;

    return 0;
}