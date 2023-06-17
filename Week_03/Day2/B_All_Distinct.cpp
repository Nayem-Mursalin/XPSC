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
        map<int, int> maps;
        int n, m;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> m;
            maps[m]++;
        }
        int map_size = maps.size();
        if ((n - map_size) & 1)
            map_size -= 1;
        cout << map_size << endl;
    }

    return 0;
}
