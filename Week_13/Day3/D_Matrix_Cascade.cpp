#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define maxll 9223372036854775800
#define maxint 2147483647
#define pii pair<int, int>

const int N = 3010;
int n;
char g[N][N];
int tr1[N * 2], tr2[N * 2];
int lowbit(int x)
{
    return x & -x;
}
void add(int *tr, int x)
{
    for (int i = x; i <= n << 1; i += lowbit(i))
    {
        tr[i] ^= 1;
    }
}
int query(int *tr, int x)
{
    int ret = 0;
    for (int i = x; i; i -= lowbit(i))
    {
        ret ^= tr[i];
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {

            cin >> g[i];
        }
        memset(tr1, 0, n * 2 + 10 << 2);
        memset(tr2, 0, n * 2 + 10 << 2);
        int ret = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int k1 = j - i + n, k2 = j + i + 1;
                if (g[i][j] + query(tr1, k1) + query(tr2, k2) & 1)
                {
                    ret++;
                    add(tr1, 1), add(tr1, k1 + 1);
                    add(tr2, 1), add(tr2, k2);
                }
            }
        }
        cout << ret << endl;
    }
    return 0;
}
