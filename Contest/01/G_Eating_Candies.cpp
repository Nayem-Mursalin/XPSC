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
        ll total = 0;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        ll candy = 0, weight_a = 0, weight_b = 0;
        int j_c = 0;
        int i = 1, j = n;

        while (i <= j)
        {
            if (weight_a <= weight_b)
            {
                weight_a += v[i];
                i++;
            }
            else if (weight_a >= weight_b)
            {
                weight_b += v[j];
                j--;
                j_c++;
            }
            if (weight_a == weight_b)
            {
                candy = i - 1 + j_c;
            }
        }
        cout << candy << endl;
    }
    return 0;
}