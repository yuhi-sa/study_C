/**  @file main.c
 *   @brief  コマンドラインオプションを判定する
 *   @date   2016/12/15
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>
#include <string.h>  // strncmp

/** @fn int main(int argc, char* argv[])
 *  @brief コマンドラインオプションを判定する
 *
 *  入力：
 *  - コマンドライン引数にオプションが与えられる（オプションは0個以上）．
 *    オプションは-から始まる文字列で，以下の4種類がある．
 *    -help, -version, -test, -search
 *
 *  出力：
 *  - 与えられたオプションの文字列（-を除く）を，"option "の後に表示し，改行する
 *  - コマンドライン引数にオプションが与えられなければ，何も表示しない
 *  - 4種類のオプション以外が与えられても，何もしない
 *  - 上記を与えられたオプション全てに対して実行する
 *
 *  実行例：
\verbatim
./main -search -search -help -help
\endverbatim
  *  出力例：
\verbatim
option search
option search
option help
option help
\endverbatim
 *  実行例：
\verbatim
./main -punch -search -version
\endverbatim
  *  出力例：
\verbatim
option search
option version
\endverbatim
 *  実行例：
\verbatim
./main
\endverbatim
  *  出力例：
\verbatim
\endverbatim
 *  @date   2016/12/15
 *  @author 佐伯雄飛，B162392
 */
int main(int argc, char* argv[]) {
  int i = 1;
  argc--;

  while (argc > 0) {
    if ('-' == argv[i][0]) {
      if (strncmp("help", &argv[i][1], 10) == 0) {
        printf("option help\n");
      }
      if (strncmp("search", &argv[i][1], 10) == 0) {
        printf("option search\n");
      }
      if (strncmp("version", &argv[i][1], 10) == 0) {
        printf("option version\n");
      }
      if (strncmp("test", &argv[i][1], 10) == 0) {
        printf("option test\n");
      }
    }

    i++;
    argc--;
  }

  return 0;
}
