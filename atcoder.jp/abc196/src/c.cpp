#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repm(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define repm2(i, s, n) for (int i = (int)(n - 1); i >= (s); i--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using ll = long long; // more than 10^9
using P = pair<int, int>;
const int INF = 0x3fffffff;
template <typename T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
template <typename T>
bool chmin(T &a, const T &b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

int main()
{
    ll n;
    ll cnt = 0;
    ll prev = 0;

    cin >> n;

    for (int d = 1; d <= 12; ++d)
    // rep(three_zeros_num, 5)
    {
        if (n < 11)
            break;

        ll mx = 1;
        ll mn = 1;
        int half_tens = 1;

        rep(i, d) { mx *= 10; }
        mx -= 1;

        rep(i, d - 1) { mn *= 10; }

        rep(i, d / 2) { half_tens *= 10; }

        if (d % 2)
        {
            if (mn <= n && n <= mx)
                break;
        }
        else
        {
            if (mn <= n && n <= mx)
            {
                prev = n / half_tens - mn / half_tens + 1;
                cnt += prev;
                if (n / half_tens > n % half_tens)
                {
                    --prev;
                    --cnt;
                }
                // else
                // {
                //     mx /= 100;
                //     mn /= 100;
                //     cnt += mx / half_tens - mn / half_tens + 1;
                //     if (mx == 99)
                //         --cnt;
                // }
                break;
            }
            else
            {
                prev = mx / half_tens - mn / half_tens + 1;
                cnt += prev;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}