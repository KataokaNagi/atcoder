// errorのときに実行番号を表示しないように注意

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A;
    cin >> N >> A;

    // ここにプログラムを追記
    // @see ex6
    int x = A;
    for (int i = 0; i < N; ++i)
    {
        int B;
        string op;

        cin >> op >> B;

        if (op == "+")
        {
            cout << i + 1 << ":";
            cout << (x += B) << endl;
        }
        else if (op == "-")
        {
            cout << i + 1 << ":";
            cout << (x -= B) << endl;
        }
        else if (op == "*")
        {
            cout << i + 1 << ":";
            cout << (x *= B) << endl;
        }
        else if (op == "/" && B != 0)
        {
            cout << i + 1 << ":";
            cout << (x /= B) << endl;
        }
        else
        {
            cout << "error" << endl;
            break;
        }
    }
}
