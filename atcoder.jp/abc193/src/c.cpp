#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repm(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define repm2(i, s, n) for (int i = (int)(n - 1); i >= (s); i--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using ll = long long; // more than 10^9
using P = pair<int, int>;

// aよりもbが大きいならばaをbで更新する
// (更新されたならばtrueを返す)
template <typename T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b; // aをbで更新
        return true;
    }
    return false;
}
// aよりもbが小さいならばaをbで更新する
// (更新されたならばtrueを返す)
template <typename T>
bool chmin(T &a, const T &b)
{
    if (a > b)
    {
        a = b; // aをbで更新
        return true;
    }
    return false;
}

int main()
{
    int cnt = 0;
    ll n;

    cin >> n;
    vector<bool> used_a((int)sqrt(10000000000));

    for (ll a = 2; a < n; ++a)
    {
        used_a.at(a) = false;
    }

    for (ll a = 2; a < n; ++a)
    {
        if (!used_a.at(a) && n % a == 0)
        {
            for (ll ab = a; ab < n; ab *= a)
            {
                used_a.at(ab) = true;
                ++cnt;
            }

            // int ab = n;
            // for (int b = 2; (ab = n / a) > 1; ++b)
            // {
            //     ++cnt;
            // }
        }
    }

    cout << cnt << endl;
    return 0;
}