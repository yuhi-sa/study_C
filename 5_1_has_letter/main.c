/**  @file main.c
 *   @brief  文字列中の文字の有無を判定する
 *   @date   2016/12/15
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>
#include <stdbool.h>

/** @fn bool find_letter(char x, char str[])
 *  @brief  文字列str中の文字xの位置を返す
 *
 *  仕様：
 *  - 文字列中にxが存在すればtrue，なければfalse
 *
 *  @param  x 検索する文字（char型）
 *  @param  str 検索対象の文字列（char[]型）
 *  @return bool型．str中にxが存在すればtrue，そうでなければfalse
 *  @date   2016/12/15
 *  @author 佐伯雄飛，B162392
 */

bool find_letter(char x, char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    if (x == str[i]) {
      return true;
    }
    i++;
  }
  return false;
}

/** @fn int main(void)
 *  @brief 文字列中の文字の有無を判定する
 *
 *  入力：
 *  - コマンドライン引数に検索するべき文字xが1つ与えられる
 *  -
標準入力には検索対象の，空白を含まない文字列strが1つ与えられる．長さはlen以下．
 *
 *  出力：
 *  - 文字列strに文字xが存在すれば1を，そうでなければ0を表示する．
 *  - コマンドライン引数にxが与えられなければ，何も表示せずに終了する（return
0で）．
 *
 *  実行例：
\verbatim
./main G
\endverbatim
 *  入力例：
\verbatim
Hqb5GF&M3ilq8HlAyhz7aL9OYjIbZXI1A
\endverbatim
  *  出力例：
\verbatim
1
\endverbatim
 *  実行例：
\verbatim
./main X
\endverbatim
  *  入力例：
\verbatim
JwaH
\endverbatim
  *  出力例：
\verbatim
0
\endverbatim
 *  実行例：
\verbatim
./main
\endverbatim
  *  入力例：
\verbatim
asflk;j;lfas
\endverbatim
  *  出力例：
\verbatim
\endverbatim
 *  @date   2016/12/15
 *  @author 佐伯雄飛，B162392
 */
int main(int argc, char* argv[]) {
  // 引数の数を判定してください
  char x = *argv[1];  // コマンドライン引数からxに値を設定してください
  int len = 100;

  char str[len];
  scanf("%99s", str);
  bool location = find_letter(x, str);

  printf("%d\n", location ? 1 : 0);

  return 0;
}
