#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0, j = n - 1;; i++, j--)
    {
        if (i == j + 1)
        {
            break;
        }
        cout << a[i] << " ";
        if (i == j)
        {
            break;
        }
        cout << a[j] << " ";
    }
    cout << endl;

    return 0;
}