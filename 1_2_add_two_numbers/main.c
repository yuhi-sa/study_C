/**  @file main.c
 *   @brief  2つの整数の和を表示する
 *   @date   2016/10/13
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @breaf  2つの整数の和を表示する
 *
 *  入力：
 *  - 標準入力に2つの整数が与えられる
 *
 *  出力：
 *  - 2個の整数の和を表示する
 *
 *  入力例：
\verbatim
1 2
\endverbatim
  *  出力例：
\verbatim
3
\endverbatim
  *  入力例：
\verbatim
4 8
\endverbatim
  *  出力例：
\verbatim
12
\endverbatim
 *  @date   2016/10/13
 *  @author 佐伯雄飛，B162392
 */
int main(void) {

  int number1, number2;
  scanf("%d", &number1);
  scanf("%d", &number2);

  int number3 = number1 + number2;

  printf("%d\n", number3); // これをnumber3にする

  return 0;
}
