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

    int T, a[4];
    cin >> T;
    while (T--)
    {
        for (int i = 0; i < 4; ++i)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 1; i < 4; ++i)
        {
            if (a[0] < a[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
