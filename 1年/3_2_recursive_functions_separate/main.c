/**  @file main.c
 *   @brief  再帰関数を計算する
 *   @date   2016/11/10
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

int Fibonacci(int n);
int factorial(int a);

/** @fn int main(void)
 *  @brief 再帰関数を計算する
 *
 *  入力：
 *  - 標準入力には，正の整数が1つ与えられる．
 *
 *  出力：
 *  - 与えられた整数nのフィボナッチ数と階乗を計算する
 *    関数を呼び出し，
 *    この順番で標準出力に表示する．
 *  - 数値と数値の間には空白を1ついれる
 *  - 実数xが正の整数ではない場合，
\verbatim
Error: the number must be positive
\endverbatim
 *    というエラーを表示し，（return 0で）終了する．
 *
 *  入力例：
\verbatim
5
\endverbatim
  *  出力例：
\verbatim
5 120
\endverbatim
  *  入力例：
\verbatim
-2
\endverbatim
  *  出力例：
\verbatim
Error: the number must be positive
\endverbatim
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  int n;
  scanf("%d", &n);

  if (n > 0) {
    printf("%d ", Fibonacci(n));
    printf("%d\n", factorial(n));

  } else if (n <= 0) {
    printf("Error: the number must be positive");
    printf("\n");
  }
  return 0;
}
