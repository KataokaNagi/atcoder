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
    int n, m;
    int a, b;
    vector<int> ans;
    unordered_set<ll> a_s, b_s, cap, cup, ans_s;

    cin >> n >> m;

    rep(i, n)
    {
        cin >> a;
        a_s.insert(a);
        cup.insert(a);
    }

    rep(i, m)
    {
        cin >> b;
        b_s.insert(b);
        cup.insert(b);

        if (a_s.count(b))
        {
            cap.insert(b);
        }
    }

    for (auto as : a_s)
        if (cup.count(as) && !cap.count(as))
            ans_s.insert(as);

    for (auto bs : b_s)
        if (cup.count(bs) && !cap.count(bs))
            ans_s.insert(bs);

    for (auto an : ans_s)
        ans.push_back(an);

    sort(ans.begin(), ans.end());

    rep(i, ans.size())
            cout
        << ans.at(i) << endl;

    return 0;
}
