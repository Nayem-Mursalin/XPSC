#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

int findMinXOR(int a, int b)
{
    int diff = a ^ b;
    int msb = 0;

    while (diff)
    {
        diff >>= 1;
        msb++;
    }
    int x = 0;
    for (int i = 0; i < msb; i++)
    {
        x <<= 1;
        x |= 1;
    }

    return x;
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
        cout << findMinXOR(a, b) << " " << endl;
    }
    return 0;
}