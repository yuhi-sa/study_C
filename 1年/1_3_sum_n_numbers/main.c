/**  @file main.c
 *   @brief  n個の実数の和を表示する
 *   @date   2016/10/17
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief  n個の実数の和を表示する
 *
 *  入力：
 *  - 標準入力の最初は実数の個数n（正の整数)
 *  - それに引き続いてn個の実数が与えられる
 *
 *  出力：
 *  - n個の整数の和を（小数点第1位まで）表示する
 *
 *  入力例：
\verbatim
10 0.17092690844 0.269405693204 0.272729853937 0.83502923788 0.539916669772
0.186507679728 0.660337164448 0.335226340127 0.440513411122 0.75002980058
\endverbatim
  *  出力例：
\verbatim
4.5
\endverbatim
  *  入力例：
\verbatim
6 0.344080271438 0.462451151037 0.76436728616 0.592085694456 0.145033025297
0.167567732804
\endverbatim
  *  出力例：
\verbatim
2.5
\endverbatim
 *  @date   2016/10/17
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  int n;
  scanf("%d", &n);

  float sum = 0;
  for (int i = 1; i <= n; i++) {
    float number;
    scanf("%f", &number);
    sum += number;
  }

  printf("%.1f\n", sum);  // 小数点第1位まで表示させる

  return 0;
}
