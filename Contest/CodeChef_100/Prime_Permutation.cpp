#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

vector<bool> is_prime(100000, true);

void seive()
{
    for (int p = 2; p * p <= 10005; p++)
    {
        if (is_prime[p] == true)
        {
            for (int i = p * p; i <= 10005; i += p)
                is_prime[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    seive();
    int T;
    cin >> T;
    while (T--)
    {
        int n, flag = 0, i, a, b;
        cin >> n;

        for (i = 2; i <= n / 2; ++i)
        {
            if (is_prime[i] == true)
            {
                if (is_prime[n - i] == true)
                {
                    a = i;
                    b = n - i;
                    flag = 1;
                    break;
                }
            }
        }

        if (n < 4 or flag == 0)
        {
            cout << -1 << endl;
        }

        else
        {
            for (int i = a + 1; i <= n; i++)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= a; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}