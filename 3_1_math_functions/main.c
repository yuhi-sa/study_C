/**  @file main.c
 *   @brief  数値に数学関数を適用する
 *   @date   2016/11/10
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>
#include <math.h>

/** @fn int main(void)
 *  @brief  数値に数学関数を適用する
 *
 *  入力：
 *  - 標準入力には，実数が1つ与えられる．
 *
 *  出力：
 *  - 与えられた実数xの平方根，0.8乗，3.4乗，
 *    sin(x)，常用対数，自然対数を計算し，
 *    この順番で標準出力に表示する．
 *  - 数値は小数点第5位まで表示する（%.5f）
 *  - 数値と数値の間には空白を1ついれる
 *  - 実数xが正の実数ではない場合，
\verbatim
Error: the number must be positive
\endverbatim
 *    というエラーを表示し，（return 0で）終了する．
 *
 *  入力例：
\verbatim
3.1
\endverbatim
  *  出力例：
\verbatim
1.76068 2.47223 46.84139 0.04158 0.49136 1.13140
\endverbatim
  *  入力例：
\verbatim
-4
\endverbatim
  *  出力例：
\verbatim
Error: the number must be positive
\endverbatim
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  float x;
  scanf("%f", &x);

  if (x >= 0) {
    printf("%.5f ", sqrtf(x));
    printf("%.5f ", powf(x, 0.8));
    printf("%.5f ", powf(x, 3.4));
    printf("%.5f ", sinf(x));
    printf("%.5f ", log10(x));
    printf("%.5f", log(x));
    printf("\n");
  } else if (x < 0) {
    printf("Error: the number must be positive");
    printf("\n");
  }

  return 0;
}
