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
        cin >> n;
        if (n == 3)
        {
            cout << -1 << endl;
            continue;
        }
        int a[n];
        if (n % 2 == 0)
        {
            int j = 1;
            for (int i = n - 1; i >= 0; --i, j++)
            {
                a[i] = j;
            }
        }
        else
        {
            for (int i = n - 1, j = 1; i >= 0; ++j, --i)
            {
                if (i == ((n + 1) / 2))
                {
                    a[i] = j + 1;
                    a[i - 1] = j;
                    j++;
                    i--;
                }
                else
                {
                    a[i] = j;
                }
            }
        }
        if (n == 5)
        {
            a[2] = 1;
            a[3] = 2;
            a[4] = 3;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}