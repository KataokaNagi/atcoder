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

    cin >> n;

    for (int comma_num = 1; comma_num < 6; ++comma_num)
    // rep(three_zeros_num, 5)
    {
        if (n < 1000)
            break;

        ll p0 = 1;
        rep(i, comma_num)
        {
            p0 *= 1000;
        }
        ll p1 = p0 * 1000;

        if (n < p1)
        {
            cnt += comma_num * (n - p0 + 1);
            break;
        }
        else
        {
            cnt += comma_num * (p1 - p0);
        }
    }

    cout << cnt << endl;
    return 0;
}