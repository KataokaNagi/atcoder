
# コードレビュー

## a
AC
- ACWAのマクロを追加した

## b
AC
- 大きい数でlog2の実装
- else breakを省略したらll型の限界を超えてエラー
- rep内でprintして終了する手段も
- log2((long double)n)で64bitの精度に
    - 整数問題で実数は避ける
- 2^kはシフト演算
    - nの桁数
- 64bitのシフト
    - 1 long long << i

## c 
CE
- 辞書順の問題
    - 探索
        - 文字の使用不使用の判定
            - cnt['w'-1]でない
            - arg = 1 << str.length() - 1 でスタート
                - arg & (1 << i) で判定
                - 次のargは arg ^ (1 << i)
        - 辞書順のソートと重複を意識せず、全ての組み合わせをつくる
            - 配列要素の辞書ソートはsortで可能
            - unique()で重複を削除
        - 再帰関数の命名に困ったらfind()
    - next_permutation
        - sort後
        - while(k>1){next_permutation(s.begin(),s.end());k--;}
