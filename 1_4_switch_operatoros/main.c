/**  @file main.c
 *   @brief  2個の実数に演算を適用する
 *   @date   2016/10/17
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief  2個の実数に演算を適用する
 *
 *  入力：
 *  - 標準入力の最初は演算子を表す文字（+, -, *, / のいずれか）
 *  - それに引き続く2個の実数は演算子を適用する数値
 *
 *  出力：
 *  - 2個の数値に演算子を適用した結果の数値を出力する
 *  - 数値は小数点第2位まで表示する（%.2f）．
 *
 *  入力例：
\verbatim
+ 0.912665355362 0.306135641218
\endverbatim
  *  出力例：
\verbatim
1.22
\endverbatim
  *  入力例：
\verbatim
/ 0.914028521038 0.759992013169
\endverbatim
  *  出力例：
\verbatim
1.20
\endverbatim
 *  @date   2016/10/17
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  char operator;
  scanf("%c", &operator);

  float operand1;
  float operand2;
  scanf("%f", &operand1);
  scanf("%f", &operand2);

  float result;
  switch (operator) {
    case '+':
      result = operand1 + operand2;
      break;
    case '-':
      result = operand1 - operand2;
      break;
    case '*':
      result = operand1 * operand2;
      break;
    case '/':
      result = operand1 / operand2;
      break;
    default:  // unknown operator
      result = 0;
  }
  printf("%.2f\n", result);

  return 0;
}
