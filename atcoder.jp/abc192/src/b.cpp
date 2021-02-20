#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  bool can = false;

  cin >> s;

  rep(i, s.size())
  {
    if (i % 2)
    {
      if (islower(s.at(i)))
      {
        can = true;
        break;
      }
    }
    else
    {
      if (isupper(s.at(i)))
      {
        can = true;
        break;
      }
    }
  }

  if (can)
  {
    cout
        << "No" << endl;
  }
  else
  {
    cout
        << "Yes" << endl;
  }
}