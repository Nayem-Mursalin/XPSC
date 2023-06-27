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
        int n, x, y, z;
        char ch;
        cin >> n;
        cin.ignore();
        string s;
        vector<char> v;
        getline(cin, s);
        for (int i = n - 1; i >= 0; i--)
        {
            x = s[i] - '0';
            y = s[i - 1] - '0';
            z = s[i - 2] - '0';
            if (x > 0)
            {
                v.push_back(x + 96);
            }
            else
            {
                x = 96 + y + z * 10;
                v.push_back(x);
                i -= 2;
            }
        }
        for (int i = v.size() - 1; i >= 0; --i)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}