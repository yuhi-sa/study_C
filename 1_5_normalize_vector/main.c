/**  @file main.c
 *   @brief  ベクトルxの要素をノルムの2乗で割ったものを表示する
 *   @date   2016/10/17
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief  n次元ベクトルxを読み込み，ノルムの2乗で割る
 *
 *  入力：
 *  - 標準入力の最初の整数はn（nは1以上の整数）
 *  - それに引き続くn個の実数はベクトルxの要素
 *    (\f$x = (x_1, x_2, \ldots, x_n) \f$)
 *
 *  出力：
 *  - ベクトルxの各要素\f$x_i\f$を
 *    xのノルムの2乗で割ったもの（\f$ \frac{x_i}{\| x \|^2} \f$）を，
 *    縦1列に小数点第6位まで標準出力に表示する（%.6f）．
 *  - ただしxのノルムが0の場合には，0ベクトルを表示すること
 *
 *  入力例：
\verbatim
3 0.7995454735237852 0.6355523363250306 0.4970340257100355
\endverbatim
  *  出力例：
\verbatim
0.619686
0.492584
0.385225
\endverbatim
  *  入力例：
\verbatim
8 0.192413183882287 0.3592929421318327 0.43304124430348645 0.04812775140485881
0.8097877087349868 0.4454853632738086 0.5002661497859434 0.2942751129005189
\endverbatim
  *  出力例：
\verbatim
0.124376
0.232247
0.279917
0.031110
0.523446
0.287961
0.323371
0.190219
\endverbatim
 *  @date   2016/10/17
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  int length;
  scanf("%d", &length);

  float x[length];
  float sum_x = 0.0;
  for (int i = 0; i < length; i++) {
    scanf("%f",
          &x[i]);  // ここで標準入力から実数を読み込み，x[i]に代入してください

    sum_x += x[i] * x[i];
  }

  for (int i = 0; i < length; i++) {
    if (sum_x > 0) {
      x[i] /= sum_x;
    } else {
      x[i] = 0.0;
    }

    printf("%.6f\n", x[i]);  // ここでx[i]を表示してください
  }

  return 0;
}
