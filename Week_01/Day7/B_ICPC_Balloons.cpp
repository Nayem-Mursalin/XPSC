#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
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
        string s;
        int n;
        cin >> n;
        cin >> s;
        int arr[200] = {0};
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[s[i]] == 0)
            {
                arr[s[i]] = 1;
                count += 2;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}