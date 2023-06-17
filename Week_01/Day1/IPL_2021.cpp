//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        int i = 0, j = 0;
        vector<int> v;
        list<int> li;

        while (j < n)
        {
            while (!li.empty() && arr[j] >= arr[li.back()])
            {
                li.pop_back();
            }
            li.push_back(j);
            if (j < k - 1)
            {
                j++;
            }
            else
            {
                while (!li.empty() && li.front() < i)
                {
                    li.pop_front();
                }
                v.push_back(arr[li.front()]);
                i++;
                j++;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends