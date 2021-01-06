/**  @file main.c
 *   @brief  配列の平均の計算
 *   @date   2016/11/10
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

float average(float x[], int n);

/** @fn int main(void)
 *  @brief 配列の平均の計算
 *
 *  入力：
 *  - 標準入力の最初の整数はn（nは1以上の整数）
 *  - それに引き続くn個の実数はベクトルxの要素
 *    (\f$x = (x_1, x_2, \ldots, x_n) \f$)
 *
 *  出力：
 *  - x_iの平均を計算する関数averageを呼び出し，出力する．
 *  - 数値は小数点第5位まで表示する（%.5f）
 *
 *  入力例：
\verbatim
4 0.185748966526 0.32415795911 0.825689568236 0.371623309603
\endverbatim
  *  出力例：
\verbatim
0.42680
\endverbatim
  *  入力例：
\verbatim
2 0.808179641113 0.322645787577
\endverbatim
  *  出力例：
\verbatim
0.56541
\endverbatim
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  int length;
  scanf("%d", &length);

  float x[length];
  for (int i = 0; i < length; i++) {
    float element;
    scanf("%f", &element);
    x[i] = element;
  }

  printf("%.5f\n", average(x, length));

  return 0;
}
