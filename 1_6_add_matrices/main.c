/**  @file main.c
 *   @brief  2つの2次元整数行列の和を計算する
 *   @date   2016/10/18
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief  2つの2次元整数行列の和を計算する
 *
 *  入力：
 *  - 標準入力には，まず1つ目の2x2行列aの4つの要素
 *    (\f$ a_11,a_12,a_21,a_22 \f$)がこの順番で与えられる．値は整数．
 *  - それに引き続いて，2つ目の2x2行列bの4つの要素
 *    (\f$ b_11,b_12,b_21,b_22 \f$)がこの順番で与えられる．値は整数．
 *
 *  出力：
 *  - 与えられた2つの行列の和の行列cを計算し，それを標準出力に表示する．
 *  - 表示の1行目にはc_11とc_12をスペース1つで区切り表示する
 *  - 表示の2行目にはc_21とc_22をスペース1つで区切り表示する
 *  - それぞれの数字のprintfによる表示フォーマットは %4d とする
 *
 *  入力例：
\verbatim
24 -33 -38 24 -75 -26 -46 45
\endverbatim
  *  出力例：
\verbatim
 -51  -59
 -84   69
\endverbatim
  *  入力例：
\verbatim
43 -7 62 26 -23 73 -53 -87
\endverbatim
  *  出力例：
\verbatim
  20   66
   9  -61
\endverbatim
 *  @date   2016/10/18
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  int i=0;
  int n=0;
  int a[i][n];
  int b[i][n];
  int c[i][n];

  for (i = 0; i <= 1; i++) {
    for (n = 0; n <= 1; n++) {
      scanf("%d", &a[i][n]);
      
    }
  }

  for (i = 0; i <= 1; i++) {
    for (n = 0; n <= 1; n++) {
      scanf("%d", &b[i][n]);
    }
  }

  for (i = 0; i <= 1; i++) {
    for (n = 0; n <= 1; n++) {
     c[i][n] = a[i][n] + b[i][n];
    }
  }

  for (i = 0; i <= 1; i++) {
    for (n = 0; n <= 1; n++) {
      printf("%4d ", c[i][n]);
    }
    printf("\n");
  }

  return 0;
}
