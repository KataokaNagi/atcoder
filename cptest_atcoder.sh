# @file cptest_atcoder.sh
# @brief cptest for AtCoder
# @note use Bash on Ubuntu on Windows & set alias of /bin/bash/cptest_atcoder.sh
# @note example: cptest arc087_b
# @date 2021-02-13 12:25:35
# @see Visual Studio Codeで競プロ環境構築(実践編) https://qiita.com/AokabiC/items/af685bfd205dda44ec45

problemname=$1
oj dl "https://${problemname:0:6}.contest.atcoder.jp/tasks/${problemname:0:8}"
# g++ -Wall -std=c++14 ./$1.cpp
g++ -Wall -std=c++14 ./${problemname:8:8}.cpp
oj test
rm -f a.out
rm -rf test
