/**  @file main.c
 *   @brief  文字列から文字を検索する
 *   @date   2016/11/10
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

// 関数find_letterのプロトタイプ宣言
int find_letter(char x, char str[]);

/** @fn int main(void)
 *  @brief 文字列から文字を検索する
 *
 *  入力：
 *  - 標準入力から，まず文字xが1つ与えられる
 *  - 続いて，空白を含まない文字列strが1つ与えられる．長さはlen以下．
 *
 *  出力：
 *  - 文字列str中の文字xの位置を表示する．
 *    文字列の最初の文字がxであれば0を，2番目の文字がxであれば1を，
 *    （以下同文）出力する．
 *    2回以上xが出現する場合には，最初の位置を表示する．
 *    ただし文字xが文字列str中に存在しない場合には-1を表示する．
 *
 *  入力例：
\verbatim
a This_is_a_pen
\endverbatim
  *  出力例：
\verbatim
8
\endverbatim
 *  入力例：
\verbatim
f vws8a&&Xbeg6flsXW8pdfAinv//MQNh<ST8CFD
\endverbatim
  *  出力例：
\verbatim
12
\endverbatim
  *  入力例：
\verbatim
- CBk1<6
\endverbatim
  *  出力例：
\verbatim
-1
\endverbatim
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  char x;
  scanf("%c", &x);

  int len = 100;
  char str[len];
  scanf("%99s", str);

  int location = find_letter(x, str);

  printf("%d\n", location);

  return 0;
}
