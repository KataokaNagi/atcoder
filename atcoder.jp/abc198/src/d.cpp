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
    string s1, s2, s3;
    bool exist = true;

    cin >> s1 >> s2 >> s3;

    rep2(n3, pow(10, s3.length() - 1), pow(10, s3.length()))
    {
        rep2(n1, pow(10, s1.length() - 1), n3)
        {
            if (n1 < pow(10, s1.length()))
                break;
        }
    }

    // 恐らく、制約のキツい一致した桁だけをはじめに見るべきだった

    return 0;
}