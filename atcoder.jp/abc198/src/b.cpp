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
    string n;
    bool can = false;

    cin >> n;

    rep(i, 10)
    {
        int len = n.length();
        int half_len = len / 2;
        string l = n.substr(0, half_len);
        string r = n.substr(len - half_len, len);
        reverse(r.begin(), r.end());

        if (l == r)
        {
            can = true;
        }
        n = "0" + n;
    }

    if (can)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}