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
        int n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> pr(n);
        cin >> v[0];
        for (int i = 1; i < n - 1; i++)
        {
            cin >> v[i];
            pr[i - 1] = v[i] - v[i - 1];
        }
        ll total = (n * (n + 1)) / 2;

        // if (!(v[n - 1] == total or v[n - 1] == (total - n)))
        // {
        //     cout << "NO" << endl;
        //     continue;
        // }

        sort(pr.begin(), pr.end());

        int count = 0;
        bool check = true;

        vector<ll> miss;
        ll dbl = 0;
        for (int i = 0, j = 1; i < n; i++, j++)
        {
            if (pr[i] != j)
            {
                miss.push_back(j);
                if (pr[i] == j + 1)
                {
                    j++;
                }
            }
            if (pr[i] == pr[i + 1])
            {
                dbl = pr[i];
                j--;
            }
        }

        sort(miss.begin(), miss.end());

        for (int i = 0; i < miss.size(); i++)
        {
            if (miss[i] < n)
            {
                pr.push_back(miss[i]);
            }
        }

        sort(pr.begin(), pr.end());

        for (int i = 0; i < n; i++)
        {
            if (pr[i] != i + 1)
            {
                check = false;
                break;
            }
        }

        // if (miss.back() == dbl)
        // {
        //     check = true;
        // }
        // else
        // {
        //     for (int i = 0; i < miss.size(); i++)
        //     {
        //         if (miss[i] > n)
        //         {
        //             check = false;
        //         }
        //     }
        // }

        // for (int i = 0, j = 0; i < n; i++, j++)
        // {
        //     if (v[i] != pr[j])
        //     {
        //         count++;
        //         j--;
        //         if (count == 2)
        //         {
        //             check = true;
        //             break;
        //         }
        //     }
        // }
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