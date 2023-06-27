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

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        bool check = true;
        cin >> n;
        int arr[n];
        char chr[n], num[52], tempChar;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> chr[i];
            num[arr[i]] = chr[i];
        }
        for (int i = 0; i < n; ++i)
        {
            tempChar = chr[i];
            if (tempChar != num[arr[i]])
            {
                check = false;
                continue;
            }
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}