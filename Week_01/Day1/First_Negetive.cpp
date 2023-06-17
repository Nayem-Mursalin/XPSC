#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k)
{
    vector<long long> v;
    queue<long long> q;
    int i = 0, j = 0;
    while (j < n)
    {
        if (j < k - 1)
        {
            if (arr[j] < 0)
            {
                q.push(j);
            }
            j++;
        }
        else
        {
            if (arr[j] < 0)
            {
                q.push(j);
            }
            while (!q.empty() && q.front() < i)
            {
                q.pop();
            }
            if (q.empty())
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(arr[q.front()]);
            }
            i++;
            j++;
        }
    }
    return v;
}

int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
