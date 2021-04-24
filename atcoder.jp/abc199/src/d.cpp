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

std::vector<std::vector<long long>> comb(int n, int r)
{
    std::vector<std::vector<long long>> v(n + 1, std::vector<long long>(n + 1, 0));
    for (int i = 0; i < v.size(); i++)
    {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for (int j = 1; j < v.size(); j++)
    {
        for (int k = 1; k < j; k++)
        {
            v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
        }
    }
    return v;
}

int main()
{
    int n, m;
    int a, b;
    ll cnt = 0;

    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(n));
    vector<int> colored(n);

    repi(r, 1, n) rep(c, r)
    {
        cin >> a >> b;
        mat.at(--a).at(--b) = 1;
    }
    repi(r, 1, n) rep(c, r)
    {
        if (mat.at(r).at(c))
        {
            ++colored.at(r);
        }
    }

    cout << cnt << endl;
    return 0;
}