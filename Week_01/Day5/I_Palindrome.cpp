#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool check = true;

    string n;
    cin >> n;

    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (check && n[i] == '0')
        {
            continue;
        }
        if (n[i] != 0)
        {
            check = false;
        }
        cout << n[i];
    }
    cout << endl;
    int x = n.size() - 1;
    bool is_pal = true;
    for (int i = 0; i <= x; i++, x--)
    {
        if (i == x)
        {
            break;
        }
        if (n[i] != n[x])
        {
            is_pal = false;
            break;
        }
    }
    cout << ((is_pal) ? "YES" : "NO") << endl;

    return 0;
}