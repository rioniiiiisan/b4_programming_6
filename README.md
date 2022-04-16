# 問6
今回は、header.hに二分法で求める関数bisection、ニュートン法で求める関数newtonの2つを定義し、2通りの方法で解を求めた。

## bisection関数
第1引数で関数f(x)のポインタ、第2引数で調べるxの範囲の下限x=a、第3引数で上限x=bを指定し（ただしプログラムの仕様上、f(a)とf(b)が異符号であることが前提。もし同符号だと正しく動作しない）、第4引数で最大試行可能回数を指定。c=(a+b)/2を中間値とし、f(a)とf(c)が異符号なら下限x=a、上限x=cとし、f(c)とf(b)が異符号なら下限x=c、上限x=bとしその範囲を指定してbisection関数（自分自身）を再帰的に呼び出す。f(c)=0になるか、最大試行回数が0になったら終了。

## newton関数
第1引数で関数f(x)のポインタ、第2引数で関数f(x)の導関数のポインタ、第3引数でxの初期値、第4引数で最大試行可能回数を指定。ニュートン法の漸化式はx_n+1 = x_n - f(x_n) / f'(x_n) であるので、もとまったx_n+1をnewton関数（自分自身）の引数にして再帰的に呼び出すことで、真の値に近づく。x_n+1が真の解に一定以上近づくか、最大試行回数が0になったら終了。

## 実行結果について
画像の1枚目は二分法を0〜3.0（a=0, b=3.0)、ニュートン法を初期値x=3.0で行った結果。
画像の2枚目は二分法を-3.0〜0（a=-3.0, b=0)、ニュートン法を初期値x=-3.0で行った結果。
ニュートン法の方が収束が早いことがわかる。