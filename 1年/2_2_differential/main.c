/** @file main.c
 *  @brief  数式微分を行う
 *  @date   2016/10/26
 *  @author 佐伯雄飛
 *  @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief  数式微分を行う
 *
 *  標準入力からn次多項式の係数を読み込み，
 *  その多項式と，微分したn-1次多項式を表示する
 *
 *  入力：
 *  - 標準入力の最初の整数は，多項式の次数 n（nは0以上の整数）
 *  - それに引き続くn個の実数はn次多項式の係数
 *
 *  出力：
 *  - n次多項式を以下のフォーマットで出力
 *    c0+c1x+c2x^2+...+cnx^n
 *  - 微分したn-1次多項式を以下のフォーマットで出力
 *    c0+c1x+c2x^2+...+cnx^n-1
 *  - 空白は表示しない
 *  - 係数が負であれば，+記号を-にする
 *  - 定数係数(c0)が負であれば-記号を表示する．正であれば記号を表示しない
 *  - 係数は小数点第1位まで表示する(%.1f)．
 *  -
次数nは，2次以降の項は整数だけを表示しx^nとする．1次の項はxと表示する．定数項はxを表示しない．
 *
 *  注意：
 *  - 次数nが負の場合には，何も表示せずに終了する（return 0で）
 *  - 次数nが0の場合は定数項だけであり，微分したら0を表示する
 *
 *  入力例：
\verbatim
5 0.299015168361 -0.634498680199 0.076517409876 -0.155687714204 0.50453614886
0.260700633183
\endverbatim
  *  出力例：
\verbatim
0.3-0.6x+0.1x^2-0.2x^3+0.5x^4+0.3x^5
-0.6+0.2x-0.5x^2+2.0x^3+1.3x^4
\endverbatim
  *  入力例：
\verbatim
-1
\endverbatim
  *  出力例：
\verbatim
\endverbatim
  *  入力例：
\verbatim
0 0.338757150218
\endverbatim
  *  出力例：
\verbatim
0.3
0.0
\endverbatim
 *  @date   2016/10/26
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  int n;  // order of polynomial
  scanf("%d", &n);
  n++;

  if (n < 1) {
    printf("");
  }

  else {
    float c[n];  // coefficient of n-th order term
    for (int i = 0; i < n; i++) {
      scanf("%f", &c[i]);
    }

    // print the polynomial: c0 + c1 x + c2 x^2 + .... + cn x^n

    for (int i = 0; i < n; i++) {
      printf(i > 1 ? "%+.1fx^%d" : (i == 0 ? "%.1f" : "%+.1fx"), c[i], i);
    }
    printf("\n");

    if (n == 1) {
      printf("0.0");
      printf("\n");
    }

    else {
      // differenciation
      for (int i = 1; i < n; i++) {
        c[i] *= i;
        c[i - 1] = c[i];
      }

      // print the derivative: c0' + c1' x + c2' x^2 + .... + cn' x^n-1
      for (int i = 0; i < n - 1; i++) {
        printf(i > 1 ? "%+.1fx^%d" : (i == 0 ? "%.1f" : "%+.1fx"), c[i], i);
      }
      printf("\n");
    }
  }
  return 0;
}
