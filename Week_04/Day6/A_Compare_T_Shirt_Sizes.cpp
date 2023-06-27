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
        string a, b;
        cin >> a >> b;
        // cout<<a.size()<<" "<<b.size()<<endl;
        int x, y;
        char c;
        x = a.size() - 1;
        y = b.size() - 1;
        if (a[x] != b[y])
        {
            if (a[x] > b[y])
            {
                c = '<';
            }
            else
            {
                c = '>';
            }
        }
        else
        {
            if (x == y)
            {
                c = '=';
            }
            else
            {
                if (b[y] == 'S')
                {
                    if (x > y)
                    {
                        c = '<';
                    }
                    else
                    {
                        c = '>';
                    }
                }
                else
                {
                    if (x > y)
                    {
                        c = '>';
                    }
                    else
                    {
                        c = '<';
                    }
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}