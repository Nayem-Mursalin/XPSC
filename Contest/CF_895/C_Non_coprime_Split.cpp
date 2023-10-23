#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

int divisor(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool prime_check(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        bool check = true;

        if (a == b and (a == 1 or prime_check(a)))
        {
            check = false;
        }
        else if (a == 1 && (b == 2 or b == 3) or (a == 2 and b == 3))
        {
            check = false;
        }
        if (!check)
        {
            cout << -1;
        }
        else
        {
            if (a == b)
            {
                if (a % 2 == 0)
                {
                    cout << a / 2 << " " << a / 2;
                }
                else
                {
                    int div = divisor(a);
                    cout << div << " " << a - div;
                }
            }
            else
            {
                if (a % 2 != 0 and a != 1)
                {
                    a++;
                }
                else if (a == 1)
                {
                    a += 3;
                }
                else if (a == 2)
                {
                    a += 2;
                }
                cout << a / 2 << " " << a / 2;
            }
        }
        cout << endl;
    }
    return 0;
}