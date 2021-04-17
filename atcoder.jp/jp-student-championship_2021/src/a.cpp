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
    double x, y, z;
    int ans;

    cin >> x >> y >> z;

    repm(i, 1e8)
    {
        if (y / x > i / z)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}