/**  @file main.c
 *   @brief  文字列を反転させる
 *   @date   2016/11/24
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief 文字列を反転させる
 *
 *  入力：
 *  - 標準入力から（空白を含まない99文字以下の）文字列が与えられる．
 *
 *  出力：
 *  - 入力された文字を反転して表示する．
 *
 *  入力例：
\verbatim
this_is_a_pen
\endverbatim
  *  出力例：
\verbatim
nep_a_si_siht
\endverbatim
 *  入力例：
\verbatim
72&o3mGOOLkjxQAbfHr/N>I&sDhPJ
\endverbatim
  *  出力例：
\verbatim
JPhDs&I>N/rHfbAQxjkLOOGm3o&27
\endverbatim
 *  @date   2016/11/24
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  int len = 100;
  char input[100];

  scanf("%99s", input);

  int i;
  int count = 0;
  for (i = 0; input[i] != '\0'; i++) {
    count++;
  }
  for (i = count - 1; i >= 0; i--) {
    printf("%c", input[i]);
  }
  printf("\n");
  return 0;
}
