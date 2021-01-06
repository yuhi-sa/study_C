/**  @file main.c
 *   @brief  実数の2進数表示
 *   @date   2017/1/24
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>
#include <math.h>

/** @fn int main(void)
 *  @brief  実数の2進数表示
 *
 *  入力：
 *  - 標準入力に10進数の実数が1つ与えられる（255〜-255まで）
 *
 *  出力：
 *  - 与えられた実数の2進数を表示する．
 *  - 整数部・実数部ともに2進数8桁（0で埋める）．2の補数表現は使用しない．
 *  - 先頭に符号をつける（負の場合のみ）
 *
 *  入力例：
\verbatim
16
  *  出力例：
\verbatim
00010000.00000000
\endverbatim
\verbatim
26.1875
  *  出力例：
\verbatim
00011010.00110000
\endverbatim
 *  入力例：
\verbatim
-26.1875
  *  出力例：
\verbatim
-00011010.00110000
\endverbatim
  *  入力例：
\verbatim
-127.99609375
\endverbatim
  *  出力例：
\verbatim
-01111111.11111111
\endverbatim
 *  @date   2017/1/24
 *  @author 佐伯雄飛，B162392
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
  float f;
  float seisuu;
  float syousuu;

  scanf("%f", &f);

  syousuu = modff(f, &seisuu);

  if (seisuu < 0) {
    seisuu = 0 - seisuu;
    syousuu = 0 - syousuu;
    printf("-");
  }

  int i;
  int x = (int)seisuu;
  int a[40];
  for (i = 0; 8 > i; i++) {
    a[i] = x % 2;
    x = x / 2;
  }
  while (i > 0) {
    printf("%d", a[--i]);
  }
  printf(".");

  int c[9];
  int m, l, j;

  for (l = 0; syousuu > 0; l++) {
    m = (int)(syousuu / 0.5);

    syousuu = syousuu / 0.5 - (float)m;

    c[l] = m + 0;

    if (l > 7)
      break;
  }

  for (j = 0; j < l; j++) 
  {
    printf("%d", c[j]);
  }
  printf("\n");

  return 0;
}
