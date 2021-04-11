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

double d(int &x, int &y)
{
    return sqrt(x * x + y * y);
}

int main()
{
    int r, x, y;

    cin >> r >> x >> y;

    int i_d = d(x, y);
    double d_d = d(x, y);

    if (d_d == 0)
        cout << 2 << endl;
    else if ((double)(i_d / r) == d_d / (double)r)
    {
        cout << i_d / r << endl;
        // cout << "just" << endl;
    }
    else if (d_d < 2 * r)
    {
        cout << 2 << endl;
        // cout << "< 2r" << endl;
    }
    else
    {
        cout << (int)(d_d / (double)r) + 1 << endl;
    }

    return 0;
}