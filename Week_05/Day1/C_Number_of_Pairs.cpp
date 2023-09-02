#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MAX 9223372036854775800
#define MAXint 2147483647

vector<int> v;

int binary_search_right(int l, int r, int x, int indx)
{
    int mid, ans;
    int left = indx + 1;
    int right = v.size() - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (v[mid] == x)
        {
            while (v[mid] == v[mid - 1] && mid != indx)
            {
                mid--;
            }
            return mid;
        }
        if (v[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return right;
}

int binary_search_left(int l, int r, int x, int indx)
{
    int mid, ans;
    int left = indx + 1;
    int right = v.size() - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (v[mid] == x)
        {
            while (v[mid] == v[mid - 1] && mid != indx)
            {
                mid--;
            }
            return mid;
        }
        if (v[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n, l, r, a, b, count = 0;
        cin >> n >> l >> r;
        // vector<int> v(n);
        v.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 1; i++)
        {
            a = binary_search_left(l, r, l - v[i], i);
            b = binary_search_left(l, r, r - v[i], i);
            count += b - a + 1;
        }
        cout << count << endl;
    }
    return 0;
}