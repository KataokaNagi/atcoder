#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
    bool a = true;  // true または false
    bool b = false; // true または false
    bool c = true;  // true または false

    // ここから先は変更しないこと

    if (a) // true
    {
        cout << "At";
    }
    else
    {
        cout << "Yo";
    }

    if (!a && b) // false
    {
        cout << "Bo";
    }
    else if (!b || c)
    {
        cout << "Co";
    }

    if (a && b && c) // b: false || c: false
    {
        cout << "foo!";
    }
    else if (true && false) // false
    {
        cout << "yeah!";
    }
    else if (!a || c) // c: true
    {
        cout << "der";
    }

    cout << endl;
}