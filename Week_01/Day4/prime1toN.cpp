#include <bits/stdc++.h>
using namespace std;

bool check[1009];

void seive(int n)
{
    check[0] = true, check[1] = true;
    for (int i = 2; i < n; i++)
    {
        if (check[i] == false)
        {
            // cout << i << " ";
            for (int j = i * i; j <= n; j += i)
            {
                check[j] = true;
            }
        }
    }
}

int main()
{
    seive(1005);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (!check[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}