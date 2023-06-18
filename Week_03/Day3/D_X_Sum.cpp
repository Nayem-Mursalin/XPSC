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
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll max_value = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll temp_sum = arr[i][j];
                int temp_i = i + 1, temp_j = j + 1;
                while (temp_i < n && temp_j < m)
                {
                    temp_sum += arr[temp_i][temp_j];
                    temp_i++;
                    temp_j++;
                }
                temp_i = i - 1, temp_j = j + 1;
                while (temp_i >= 0 && temp_j < m)
                {
                    temp_sum += arr[temp_i][temp_j];
                    temp_i--;
                    temp_j++;
                }
                temp_i = i - 1, temp_j = j - 1;
                while (temp_i >= 0 && temp_j >= 0)
                {
                    temp_sum += arr[temp_i][temp_j];
                    temp_i--;
                    temp_j--;
                }
                temp_i = i + 1, temp_j = j - 1;
                while (temp_i < n && temp_j >= 0)
                {
                    temp_sum += arr[temp_i][temp_j];
                    temp_i++;
                    temp_j--;
                }
                max_value = max(max_value, temp_sum);
            }
        }
        cout << max_value << endl;
    }
    return 0;
}