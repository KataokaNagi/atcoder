
# コードレビュー

## a
AC
- 等差数列
    - 選択*2＝非選択の和の存在判定

## b
AC
  
### vector<pair<int,string>>のsort()の挙動
> 一つ目を昇順にソートする  
> 一つ目が同一の場合はさらに二つ目を昇順にソートする
  
解説 - マイナビプログラミングコンテスト2021（AtCoder Beginner Contest 201） https://atcoder.jp/contests/abc201/editorial/1824?lang=ja 
  
要素がpairの時のvectorのソート  
https://t.co/74rdoWSKC4?amp=1
  
sort(v.rbegin(), v.rend()) の代わりに要素全てに-1を掛けてsort()して再び-1を掛けるという手法もあるらしい。
  
vector<pair<int,string>>のsort()をしたいとき、
> 一つ目を昇順、二つ目を降順にしたい場合は,二つ目だけにマイナスを掛けておけば良い。
  
pairに比較演算ができて似たような挙動をするっぽい。いつかやった気がするけど忘れてら

## c 
WA
- 集合問題として解いた
- 10000通りを素直に検証すればよかった
- ?は考える必要がなかった
