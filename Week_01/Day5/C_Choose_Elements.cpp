#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool check = true;

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0;

    // int i = 0, j = 0;
    // while (j < n)
    // {
    //     sum += arr[j];
    //     if (j < k - 1)
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         max_sum = max(max_sum, sum);
    //         sum -= arr[i];
    //         j++;
    //         i++;
    //     }
    // }

    sort(arr, arr + n);
    for (int i = n - 1; i >= n - k; i--)
    {
        if (arr[i] < 0)
            break;
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}