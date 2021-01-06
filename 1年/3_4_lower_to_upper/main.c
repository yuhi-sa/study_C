/**  @file main.c
 *   @brief  小文字を大文字に変換する
 *   @date   2016/11/10
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

// 関数lower2upperのプロトタイプ宣言

/** @fn int main(void)
 *  @brief 小文字を大文字に変換する
 *
 *  入力：
 *  - 標準入力から，文字列が与えられる
 *  - 文字列は空白や記号を含み，改行'\n'で終わる
 *
 *  出力：
 *  - アルファベット小文字だけを大文字に変換し，
 *    その他の文字には何もしない
 *    関数を呼び出し，入力文字列に適用し，表示する．
 *
 *  入力例：
\verbatim
this is a pen
\endverbatim
  *  出力例：
\verbatim
THIS IS A PEN
\endverbatim
  *  入力例：
\verbatim
V<qp*VP>2a9-U wN BSOLjW>L2LQiuo  v(7 A4*qhob7eD
\endverbatim
  *  出力例：
\verbatim
V<QP*VP>2A9-U WN BSOLJW>L2LQIUO  V(7 A4*QHOB7ED
\endverbatim
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  char c;

  while ((c = getchar()) != '\n') {
    printf("%c", lower2upper(c));
  }
  printf("\n");
  return 0;
}
