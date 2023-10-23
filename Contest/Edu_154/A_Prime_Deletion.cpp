#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

bool is_prime(int n)
{
    bool check = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            check = false;
            break;
        }
    }
    return check;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int ans = -1, a;

        for (int i = 0; i < 9; i++)
        {
            for (int j = i + 1; j < 9; j++)
            {
                a = (s[i] - '0') * 10 + (s[j] - '0');
                if (is_prime(a))
                {
                    ans = a;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}