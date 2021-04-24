#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, x) for (int i = 1; i <= (int)(x); ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define rrep(i, n) for (int i = (int)(n - 1); i >= 0; --i)
#define rreps(i, x) for (int i = ((int)(x)); i > 0; --i)
#define rrepi(i, a, b) for (int i = int(b); i >= int(a); --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) ((int)(x).size())
#define fill(x, y) memset(x, y, sizeof(x))
#define pb push_back
#define mp make_pair
#define fore(e, v) for (auto e : v)
#define forkv(c) for (const auto &[key, value] : c)
using ll = long long; // more than 10^9
using P = pair<int, int>;
const int INF = 0x3fffffff;
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ll n;
    int in;
    int a_mn = INF;
    int b_mn = INF;
    int a_mx = 0;
    int b_mx = 0;
    int ans;

    cin >> n;

    rep(i, n)
    {
        cin >> in;
        a_mn = min(a_mn, in);
        a_mx = max(a_mx, in);
    }
    rep(i, n)
    {
        cin >> in;
        b_mn = min(b_mn, in);
        b_mx = max(b_mx, in);
    }

    ans = (b_mn - a_mx >= 0) ? b_mn - a_mx + 1 : 0;

    cout
        << ans << endl;
    return 0;
}