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

    string s;
    bool count = false;
    while (cin >> s)
    {

        reverse(s.begin(), s.end());
        if (count)
        {
            cout << " ";
        }
        count = true;
        cout << s;
    }
    cout << endl;
}