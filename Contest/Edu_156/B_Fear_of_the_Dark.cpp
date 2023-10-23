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
        int n, px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;
        double dis_oa, dis_pa, dis_ob, dis_pb, r, p, ans, mid, kase_a, kase_b, tmp, o_kase, p_kase;
        dis_oa = sqrt((ax * ax) + (ay * ay));
        dis_ob = sqrt((bx * bx) + (by * by));

        dis_pa = sqrt(((ax - px) * (ax - px)) + ((ay - py) * (ay - py)));
        dis_pb = sqrt(((bx - px) * (bx - px)) + ((by - py) * (by - py)));

        r = max(dis_oa, dis_pa);
        p = max(dis_ob, dis_pb);
        ans = min(r, p);

        kase_a = min(dis_oa, dis_pa);
        kase_b = min(dis_ob, dis_pb);

        mid = sqrt(((bx - ax) * (bx - ax)) + ((by - ay) * (by - ay))) / 2;
        bool check_o = false, check_p = false;
        if ((dis_oa <= mid and dis_pb <= mid) or (dis_ob <= mid and dis_pa <= mid))
        {
            ans = min(ans, mid);
        }

        else
        {
            o_kase = min(dis_oa, dis_ob);
            p_kase = min(dis_pa, dis_pb);
            tmp = max(o_kase, p_kase);

            ans = min(ans, tmp);
        }
        cout << fixed << setprecision(10) << ans << endl;
        // cout << p_kase << endl;
    }
    return 0;
}