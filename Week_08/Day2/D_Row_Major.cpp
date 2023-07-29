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
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int val = n;

        for (int i = 1; i <= n; i++)
        {
            if (n % i)
            {
                val = i;
                break;
            }
        }
        int rem = n % val;
        int num = n / val;
        string str;
        for (int i = 0; i < val; i++)
        {
            char ch = 'a' + i;
            str += ch;
        }

        for (int i = 0; i < num; i++)
        {
            cout << str;
        }
        for (int i = 0; i < rem; i++)
        {
            cout << str[i];
        }

        cout << endl;
    }
    return 0;
}