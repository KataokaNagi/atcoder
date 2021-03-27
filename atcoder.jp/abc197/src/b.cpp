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
    int h, w;
    int x, y;
    int cnt = 0;
    bool can_see;

    cin >> h >> w;
    cin >> x >> y;
    --x;

    vector<string> s(h + 2);
    rep2(i, 1, h + 1)
    {
        cin >> s.at(i);
    }

    // x,y
    if (s.at(y).at(x) == '#')
    {
        cout << cnt << endl;
        return 0;
    }
    else
    {
        ++cnt;
    }

    // left
    can_see = true;
    repm2(j, 1, x)
    {
        if (!can_see)
            break;

        if (s.at(y).at(j) == '.')
        {
            ++cnt;
        }
        else
        {
            can_see = false;
        }
    }

    // right
    can_see = true;
    rep2(j, x + 1, w + 1)
    {
        if (!can_see)
            break;

        if (s.at(y).at(j) == '.')
        {
            ++cnt;
        }
        else
        {
            can_see = false;
        }
    }

    // top
    can_see = true;
    repm2(i, 1, y)
    {
        if (!can_see)
            break;

        if (s.at(i).at(x - 1) == '.')
        {
            ++cnt;
        }
        else
        {
            can_see = false;
        }
    }

    // bottom
    can_see = true;
    rep2(i, y + 1, h + 1)
    {
        if (!can_see)
            break;

        if (s.at(i).at(x - 1) == '.')
        {
            ++cnt;
        }
        else
        {
            can_see = false;
        }
    }

    cout << cnt << endl;
    return 0;
}