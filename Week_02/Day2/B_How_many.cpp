#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t, count = 0;
    cin >> n >> t;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            for (int k = 0; k <= 100; k++)
            {
                if ((i + j + k) <= n && (i * j * k) <= t)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
    }

    cout << count << endl;
}