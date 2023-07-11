#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, maxx = 0;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> m;
    for (int i = 0; i < n - 1; i++)
    {
        m[s.substr(i, 2)]++;
        maxx = max(maxx, m[s.substr(i, 2)]);
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        if (i->second == maxx)
        {
            cout << i->first << endl;
            break;
        }
    }
    // maxx = max_element(m.begin(), m.end(), cmp)->second;
    // cout << maxx << endl;

    return 0;
}