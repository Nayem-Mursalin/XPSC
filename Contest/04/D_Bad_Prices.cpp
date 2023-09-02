#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n, minn, count = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        minn = v[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] > minn)
            {
                count++;
            }
            else if (v[i] < minn)
            {
                minn = v[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}