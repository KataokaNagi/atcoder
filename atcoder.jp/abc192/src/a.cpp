#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repm(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define rep2p(i, s, n) for (int i = (s); i < (int)(n); i++)
#define rep2m(i, n, s) for (int i = (int)(n - 1); i >= (s); i--)

int main()
{
  int x;

  cin >> x;

  cout << (100 - (x % 100)) << endl;
}