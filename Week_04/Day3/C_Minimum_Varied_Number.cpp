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
        deque<int> d;
        if (n < 10)
        {
            d.push_back(n);
        }
        else
        {
            int x = 9, temp = 0;
            while (x)
            {
                if (x + temp <= n)
                {
                    d.push_front(x);
                    temp += x;
                }
                x--;
            }
        }
        while (!d.empty())
        {
            cout << d.front();
            d.pop_front();
        }
        cout << endl;
    }
    return 0;
}