/**  @file main.c
 *   @brief  a > b > cが成立するかどうかを判定する
 *   @date   2016/10/26
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief  a > b > cが成立するかどうかを判定する
 *
 *  入力：
 *  - 標準入力には3個の実数a, b, cがこの順番で与えられる．
 *
 *  出力：
 *  - \f$ a > b > c \f$が成立すれば1を，成立しなければ0を表示する
 *
 *  @date   2016/10/26
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  float a, b, c;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);

  if (a > b) {
    if (b > c) {
      printf("1\n");
    } else {
      printf("0\n");
    }
  } else {
    printf("0\n");
  }
  return 0;
}
