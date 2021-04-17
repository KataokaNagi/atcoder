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

int gcd(int x, int y)
{
    // if (x < y)
    //     swap(x, y);

    while (y > 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int min_d(int a, int b)
{
    int ans;
    rep2(i, 1, gcd(a, b) + 1)
    {
        if (!(a % i) && !(b % i))
        {
            ans = i;
            break;
        }
    }

    return ans;
}

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
    int a, b;
    int ans = 0;

    cin >> a >> b;

    repm2(y, a + 1, b + 1)
    {
        int d = min_d(y, y);
        int x = 1;
        while (1)
        {
            x *= d;
            ans = max(ans, gcd(x, y));
            if (d == 1)
                break;
            d = min_d(y / x, y / x);
        }
    }

    cout << ans << endl;
    return 0;
}