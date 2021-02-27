#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long; // more than 10^9

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
    int n;
    bool can_buy = false;
    ll min_price = 1000000000;

    cin >> n;
    vector<ll> a(n), p(n), x(n);
    rep(i, n)
    {
        cin >> a.at(i) >> p.at(i) >> x.at(i);
    }

    rep(i, n)
    {
        if (0.5 + (x.at(i) - 1) * 1 > a.at(i))
        {
            can_buy = true;
            chmin(min_price, p.at(i));
        }
    }

    if (can_buy)
    {
        cout << min_price << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
