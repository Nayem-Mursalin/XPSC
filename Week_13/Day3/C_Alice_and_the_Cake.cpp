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

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];
        }
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        map<ll, int> fr;
        bool ans = true;

        for (int i = 0; i < n; i++)
        {
            fr[v[i]]++;
        }

        priority_queue<ll> pq;
        pq.push(total);

        while (!pq.empty())
        {
            ll sp = pq.top();
            pq.pop();

            ll x = sp / 2;
            ll y = sp - x;

            if (fr[x] > 0)
            {
                fr[x]--;
            }
            else if (fr[x] == 0 and x > 1)
            {
                pq.push(x);
            }

            if (fr[y] > 0)
            {
                fr[y]--;
            }
            else if (fr[y] == 0 and y > 1)
            {
                pq.push(y);
            }

            if (pq.size() > n + 2)
            {
                ans = false;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (fr[v[i]] > 0)
            {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}