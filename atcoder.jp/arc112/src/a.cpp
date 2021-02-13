// time over
// 1 sample failed

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main()
{
    int l, r, t;

    cin >> t;
    rep(i, t)
    {
        int cnt = 0;

        cin >> l >> r;

        rep2(b, l, r + 1)
        {
            rep2(a, b, r + 1)
            {
                int c = a - b;
                if (l <= c)
                {
                    ++cnt;
                }
            }
        }

        // rep2(c, l, r + 1)
        // {
        //     rep2(b, l, r - c + 1)
        //     {
        //         int a = b + c;
        //         if (2 * c <= a && a <= 2 * b)
        //         {
        //             ++cnt;
        //         }
        //     }
        // }

        // rep2(a, l, r + 1)
        // {
        //     rep2(b, l, a - l + 1)
        //     {
        //         int c = a - b;
        //         if (c <= r - b && c <= a - c)
        //         {
        //             ++cnt;
        //         }
        //     }
        // }

        cout << cnt << endl;
    }
}