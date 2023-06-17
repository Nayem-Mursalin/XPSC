#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

int main()
{
    int a, b, c;
    long long int x;
    cin >> a >> b >> c;
    // temp = gcd(a, b);
    // x = c / temp;
    bool checks = false;
    for (int i = 0; i <= 10000; i++)
    {
        x = c - (a * i);
        if (x < 0)
        {
            checks = false;
            break;
        }
        if (x % b == 0)
        {
            checks = true;
            break;
        }
    }

    if (checks)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}