//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        int k = pat.size(), i = 0, j = 0;
        int fr1[26] = {0};
        int fr2[26] = {0};
        for (char c : pat)
        {
            fr1[c - 'a']++;
        }
        int ans = 0;
        while (j < txt.size())
        {
            fr2[txt[j] - 'a']++;
            if (j < k - 1)
            {
                j++;
            }
            else
            {
                bool check = true;
                for (int v = 0; v < 26; v++)
                {
                    if (fr1[v] != fr2[v])
                    {
                        check = false;
                        break;
                    }
                }
                if (check)
                    ans++;
                fr2[txt[i] - 'a']--;
                i++;
                j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        int ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends