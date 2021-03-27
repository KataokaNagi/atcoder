#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repm(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define repm2(i, s, n) for (int i = (int)(n - 1); i >= (s); i--)
#define aint(v) v.begin(), v.end()
#define raint(v) v.rbegin(), v.rend()
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
    int n;
    int or_l = 0;
    int or_r = 0;
    int mn = INF;

    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a.at(i);
    }

    rep2(bound, 1, n)
    {
        rep(i, bound)
        {
            or_l |= a.at(i);
        }

        rep2(i, bound, n)
        {
            or_r |= a.at(i);
        }

        mn = min(mn, (int)(or_l ^ or_r));
    }

    cout << mn << endl;
    return 0;
}