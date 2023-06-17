#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

long maximumSumSubarray(int K, vector<int> &Arr, int N)
{
    int i = 0, j = 0;
    long int sum = 0, mx = 0;
    while (j < N)
    {
        sum += Arr[j];
        if (j < K - 1)
        {
            j++;
        }
        else
        {
            mx = max(sum, mx);
            sum -= Arr[i];
            i++;
            j++;
        }
    }
    return mx;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maximumSumSubarray(k, arr, n) << endl;
    return 0;
}
