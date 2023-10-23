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

    int n, k;
    cin >> n >> k;
    vector<ll> arr(n + 8, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i)
        {
            arr[i] = arr[i - 1] + arr[i];
        }
    }

    int min = 150000016;
    ll indc = 0;
    for (int i = 0; i <= n - k; i++)
    {
        ll sum = 0;
        if (!i)
        {
            sum = arr[i + k - 1];
            if (sum <= min)
            {
                min = sum;
                indc = i;
            }
        }
        else
        {
            sum = arr[i + k - 1] - arr[i - 1];

            if (sum <= min)
            {
                min = sum;
                indc = i;
            }
        }
    }
    cout << ++indc << endl;
    return 0;
}
