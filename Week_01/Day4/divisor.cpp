#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            if (i * i != n)
                v.push_back(n / i);
        }
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << endl;
    }

    return 0;
}