#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a[30] = {0};
    cin >> n;
    char s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        a[s - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            cout << (char)(i + 97);
        }
    }

    return 0;
}