/**  @file main.c
 *   @brief  符号なし整数の2進数表示
 *   @date   2017/1/24
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief  符号なし整数の2進数表示
 *
 *  入力：
 *  - 標準入力に10進数符号なし整数が1つ与えられる（0から2147483647）
 *
 *  出力：
 *  - 与えられた整数の2進数を表示する（符号なし，32ビット（4バイト））
 *
 *  入力例：
\verbatim
3341817185
  *  出力例：
\verbatim
11000111001100000001010101100001
\endverbatim
  *  入力例：
\verbatim
2560
\endverbatim
  *  出力例：
\verbatim
00000000000000000000101000000000
\endverbatim
 *  @date   2017/1/24
 *  @author 佐伯雄飛，B162392
 */

#include <stdio.h>

int main(void) {
  int i;
  int x;
  int a[40];

  scanf("%d", &x);

  for (i = 0; 32 > i; i++) {
    a[i] = x % 2;
    x = x / 2;
  }

  while (i > 0) {
    printf("%d", a[--i]);
  }
  printf("\n");

  return 0;
}
