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

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int med = v[(n - 1) / 2];
    int i = (n - 1) / 2;

    for (int x = 1; k > 0; x++)
    {
        if (((v[i + x] - v[i]) * x) <= k)
        {
            med += (v[i + x] - v[i]);
            v[i] = v[i + x];
            k = k - (x * (v[i + x] - v[i]));
        }
        else
        {
            med++;
            k = 0;
            break;
        }
    }
    cout << med << endl;
    return 0;
}