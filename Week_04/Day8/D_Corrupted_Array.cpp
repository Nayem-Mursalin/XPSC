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
        n = n + 2;
        vector<int> v(n);
        int maxx = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        sort(v.begin(), v.end());
        int big1 = v[n - 1], big2 = v[n - 2], temp;

        if ((sum - big2 - big1) == big2 || (sum - big2 - big1) == big1)
        {
            for (int i = 0; i < n - 2; i++)
            {
                cout << v[i] << " ";
            }
        }
        else
        {
            bool temocheck = false;
            maxx = big1;
            for (int i = 0; i < n - 1; i++)
            {
                if ((sum - maxx - v[i]) == maxx)
                {
                    temocheck = true;
                    temp = i;
                    break;
                }
            }
            if (temocheck)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (i == temp)
                    {
                        continue;
                    }
                    cout << v[i] << " ";
                }
            }
            else
            {
                cout << "-1";
            }
        }
        cout << endl;
    }
    return 0;
}