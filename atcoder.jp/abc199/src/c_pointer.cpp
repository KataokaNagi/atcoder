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
    int n, q;
    string s;
    int t, a, b;
    bool swap = false;

    cin >> n >> s >> q;

    rep(i, q)
    {
        cin >> t >> a >> b;
        --t;
        --a;
        --b;

        // if (swap)
        // {
        //     a = (a < n) ? a + n : a - n;
        //     b = (b < n) ? b + n : b - n;
        // }

        if (t)
        {
            // case 1
            // (editor error)
            // char *tmp = &s.at(0);
            // &s.at(0) = &s.at(n);
            // &s.at(n) = tmp;

            // char *tmp = &s.at(n - 1);
            // &s.at(n - 1) = &s.at(2 * n - 1);
            // &s.at(2 * n - 1) = tmp;

            // case 2
            // (no output change)
            {
                char *t0 = &s.at(0);
                char *t1 = &s.at(n);
                char *t2 = &s.at(0);
                t0 = t1;
                t1 = t2;
            }
            {
                char *t0 = &s.at(n - 1);
                char *t1 = &s.at(2 * n - 1);
                char *t2 = &s.at(n - 1);
                t0 = t1;
                t1 = t2;
            }

            // case 3
            // linked list?

            // swap = !swap;
            // s = s.substr(n, 2 * n) + s.substr(0, n); // TLE
            cout << s << endl;
        }
        else
        {
            char tmp = s.at(a);
            s.at(a) = s.at(b);
            s.at(b) = tmp;
            cout << s << endl;
        }
    }

    // if (swap)
    // {
    //     cout << s.substr(n, 2 * n) + s.substr(0, n) << endl;
    // }
    // else
    // {
    //     cout << s << endl;
    // }
    cout << s << endl;
    return 0;
}
