// not complete

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repm(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define rep2p(i, s, n) for (int i = (s); i < (int)(n); i++)
#define rep2m(i, n, s) for (int i = (int)(n - 1); i >= (s); i--)

int main()
{
    int b, c;
    int cnt = 1;

    cin >> b >> c;

    int max_n = (c - (c % 2)) / 2 + 1;

    rep2m(n, max_n, 0)
    {
        rep2m(n, max_n, 0)
        {
            int B = b - 1;
            rep2p(m, n, max_n)
            {
                if (-2 <= c)
                {
                    ++cnt;
                }
            }
        }
    }

    cout << cnt << endl;
}