#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
using ull = unsigned long long;
using ll = long long; // more than 10^9
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using P = pair<int, int>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, x) for (int i = 1; i <= (int)(x); ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define rrep(i, n) for (int i = (int)(n - 1); i >= 0; --i)
#define rreps(i, x) for (int i = ((int)(x)); i > 0; --i)
#define rrepi(i, a, b) for (int i = int(b); i >= int(a); --i)
#define all(obj) obj.begin(), obj.end()
#define rall(obj) obj.rbegin(), obj.rend()
#define sz(x) ((int)(x).size())
#define fill(x, y) memset(x, y, sizeof(x))
#define pb push_back
#define mp make_pair
#define fore(e, obj) for (auto e : obj)
#define forkv(c) for (const auto &[key, value] : c)
#define YESNO(bool)            \
    if (bool)                  \
    {                          \
        cout << "YES" << endl; \
    }                          \
    else                       \
    {                          \
        cout << "NO" << endl;  \
    }
#define yesno(bool)            \
    if (bool)                  \
    {                          \
        cout << "yes" << endl; \
    }                          \
    else                       \
    {                          \
        cout << "no" << endl;  \
    }
#define YesNo(bool)            \
    if (bool)                  \
    {                          \
        cout << "Yes" << endl; \
    }                          \
    else                       \
    {                          \
        cout << "No" << endl;  \
    }

inline int in_int()
{
    int x;
    cin >> x;
    return x;
}

inline ll in_ll()
{
    ll x;
    cin >> x;
    return x;
}

inline string in_str()
{
    string x;
    cin >> x;
    return x;
}

template <class T>
bool chmx(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}

template <class T>
bool chmn(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}

template <typename T>
T gcd(T a, T b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

template <typename T>
inline T lcm(T a, T b) { return (a * b) / gcd(a, b); }

template <typename T>
inline void print(const vector<T> &v, string s = " ")
{
    rep(i, v.size()) cout << v[i] << (i != (ll)v.size() - 1 ? s : "\n");
}

template <typename T, typename S>
inline void print(const pair<T, S> &p)
{
    cout << p.first << " " << p.second << endl;
}

template <typename T>
inline void print(const T &x) { cout << x << "\n"; }
template <typename T, typename S>
inline void print(const vector<pair<T, S>> &v)
{
    for (auto &&p : v)
        print(p);
}

const int INF = 0x3fffffff;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 0, -1, -1, 0, 1};
const int dy8[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int facctorialMethod(int k)
{
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

void addRecursivelyAndDictionaryOrderly(vs &orderedWords, string makingWord, vi &cnt)
{
    bool isAllZero = true;

    rep(i, 'w' + 1)
    {
        if (cnt.at(i) > 0)
        {
            vi next_cnt(sz(cnt));
            copy(all(cnt), next_cnt);
            makingWord += --next_cnt.at(i);
            addRecursivelyAndDictionaryOrderly(orderedWords, makingWord, next_cnt);

            isAllZero = false;
        }
    }

    if (isAllZero)
        orderedWords.pb(makingWord);
}

int main()
{
    ll k;
    // int k;
    string s;
    // unordered_set<ll> s;
    // bool can = false;

    cin >> s;
    cin >> k;

    vi cnt('z' + 1);
    vs orderedWords(facctorialMethod(s.length()));
    // rep(i, n) a.pb(in_int());
    // rep(i, n) b.pb(in_int());

    fore(c, s)
    {
        ++cnt.at(c);
    }

    addRecursivelyAndDictionaryOrderly(orderedWords, "", cnt);

    print((1) ? orderedWords.at(k - 1) : 0);
    // YesNo(1);

    return 0;
}
