#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    // ここにプログラムを追記
    int cnt = 1;

    for (unsigned int i = 0; i < S.size(); ++i)
    {
        if (i % 2 == 1)
        {
            if (S.at(i) == '+')
            {
                ++cnt;
            }
            else
            {
                --cnt;
            }
        }
    }

    cout << cnt << endl;
}
