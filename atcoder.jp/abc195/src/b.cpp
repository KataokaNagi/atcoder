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
    int w;
    int a, b;
    int min, max;
    unordered_set<ll> s;
    // string s;

    bool can = false;

    cin >> a >> b;
    cin >> w;

    w *= 1000;

    rep(i, w)
    {
        bool odd = (i % 2 == 0);
        rep(j, a)
        {
            if (1)
            {
                s.insert(a);
            }
        }
    }

    if (can)
        cout << min + " " + max << endl;
    else
        cout << "UNSATISFIABLE" << endl;

    return 0;
}