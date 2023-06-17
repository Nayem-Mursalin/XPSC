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
        vector<int> countx(8, 0);
        vector<int> county(8, 0);
        char ch[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> ch[i][j];
                if (ch[i][j] == '#')
                {
                    countx[i]++;
                    county[j]++;
                }
            }
        }
        int x = 0, y = 0;
        for (int i = 1; i < 7; i++)
        {
            if (countx[i - 1] == 2 && countx[i] == 1 && countx[i + 1] == 2)
            {
                x = i;
            }
            if (county[i - 1] == 2 && county[i] == 1 && county[i + 1] == 2)
            {
                y = i;
            }
        }
        if (x && y)
        {
            cout << x + 1 << " " << y + 1 << endl;
        }
        else
        {
            if (ch[1][0] == '#')
            {
                x = 1;
                y = 0;
            }
            else if (ch[0][1] == '#')
            {
                x = 0;
                y = 1;
            }
            else if (ch[0][6] == '#')
            {
                x = 0;
                y = 6;
            }
            else if (ch[1][7] == '#')
            {
                x = 1;
                y = 7;
            }
            else if (ch[6][0] == '#')
            {
                x = 6;
                y = 0;
            }
            else if (ch[7][1] == '#')
            {
                x = 7;
                y = 1;
            }
            else if (ch[7][6] == '#')
            {
                x = 7;
                y = 6;
            }
            else if (ch[6][7] == '#')
            {
                x = 6;
                y = 7;
            }
            cout << x + 1 << " " << y + 1 << endl;
        }
    }
    return 0;
}