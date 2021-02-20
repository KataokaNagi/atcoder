#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repm(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define rep2p(i, s, n) for (int i = (s); i < (int)(n); i++)
#define rep2m(i, n, s) for (int i = (int)(n - 1); i >= (s); i--)

int pow(int x, int n)
{
  int ret = 1;
  while (n > 0)
  {
    if (n & 1)
      ret *= x; // n の最下位bitが 1 ならば x^(2^i) をかける
    x *= x;
    n >>= 1; // n を1bit 左にずらす
  }
  return ret;
}

int g1(int x)
{
  int a[10];
  rep(i, 10)
  {
    int t = x % pow(10, i + 1);
    if (i)
    {
      a[i] = (t - a[i - 1]) / pow(10, i);
    }
    else
    {
      a[i] = t;
    }
  }

  sort(a, a + 10);

  int cntNonZero = 0;
  rep(i, 10)
  {
    if (a[i] != 0)
    {
      ++cntNonZero;
    }
  }

  // debug from here
  int ret = 0;
  rep2p(i, 10 - cntNonZero, 10)
  {
    int t = a[i];

    if (t)
    {
      ret += t * pow(10, i);
    }
  }

  return ret;
}

int g2(int x)
{
  int a[10];
  rep(i, 10)
  {
    int t = x % pow(10, i + 1);
    if (i)
    {
      a[i] = (t - a[i - 1]) / pow(10, i);
    }
    else
    {
      a[i] = t;
    }
  }

  sort(a, a + 10);

  int cntNonZero = 0;
  rep(i, 10)
  {
    if (a[i] != 0)
    {
      ++cntNonZero;
    }
  }

  int ret = 0;
  rep2p(i, 10 - cntNonZero, 10)
  {
    int t = a[i];

    if (t)
    {
      ret += t * pow(10, cntNonZero - i - 1);
    }
  }

  return ret;
}

int f(int x)
{
  printf("%d", g1(x));
  printf("%d", g2(x));
  return g1(x) - g2(x);
}

int main()
{
  f(3021);
  // int n, k;

  // cin >> n >> k;

  // rep(i, n)
  // {
  //   rep(j, n)
  //   {
  //     if (1)
  //     {
  //     }
  //   }
  // }

  // cout << cnt << endl;
}