/**  @file main.c
 *   @brief  2個の複素数を標準入力から読み込み，その演算結果を表示する
 *   @date   2016/10/27
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief  2個の複素数を標準入力から読み込み，その演算結果を表示する
 *
 *  入力：
 *  - 標準入力の最初は演算子を表す文字，+, -, *, / のいずれか．
 *    これ以外の文字が与えられたら，
\verbatim
Error: unknown operator
\endverbatim
 *    というエラーを表示し，（return 0で）終了する．
 *  - それに引き続く4個の実数は，演算子を適用する複素数z1とz2の実部と虚部が
 *    Re(z1) Im(z1) Re(z2) Im(z2) の順で与えられる
 *
 *  出力：
 *  - 2個の複素数に演算を適用した結果の複素数を表示する
 *  - 実部，虚部ともに数点第5位まで表示する（%.5f）
 *  - a+bjの形式で表示する．
 *    aは実部，bは虚部．ただしbが負の場合にはa-bjと出力する
 *
 *  入力例：
\verbatim
/ 0.183514370734 0.721236372839 0.00169904140328 0.161001208126
\endverbatim
  *  出力例：
\verbatim
4.49122-1.09244j
\endverbatim
  *  入力例：
\verbatim
- 0.270864483478 0.847355883465 0.213440078194 0.417426165812
\endverbatim
  *  出力例：
\verbatim
0.05742+0.42993j
\endverbatim
 *  @date   2016/10/27
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  char a;
  float Re[3];
  float Im[3];

  scanf("%c", &a);
  scanf("%f", &Re[0]);
  scanf("%f", &Im[0]);
  scanf("%f", &Re[1]);
  scanf("%f", &Im[1]);

  if (a == '+') {
    Re[2] = Re[0] + Re[1];
    Im[2] = Im[0] + Im[1];
  } else if (a == '-') {
    Re[2] = Re[0] - Re[1];
    Im[2] = Im[0] - Im[1];
  } else if (a == '*') {
    Re[2] = Re[0] * Re[1] - Im[0] * Im[1];
    Im[2] = Re[0] * Im[1] + Re[1] * Im[0];
  } else if (a == '/') {
    Re[2] = ((Re[0] * Re[1]) + (Im[0] * Im[1])) /
            ((Re[1] * Re[1]) + (Im[1] * Im[1]));
    Im[2] = ((Im[0] * Re[1]) - (Re[0] * Im[1])) /
            ((Re[1] * Re[1]) + (Im[1] * Im[1]));
  }

  if (Im[2] > 0) {
    printf("%.5f+%.5fj", Re[2], Im[2]);
    printf("\n");
  }
  if (Im[2] < 0) {
    printf("%.5f%.5fj", Re[2], Im[2]);
    printf("\n");
  }

  return 0;
}
