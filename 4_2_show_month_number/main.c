/**  @file main.c
 *   @brief  月の番号を表示する
 *   @date   2016/11/24
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>
#include <string.h>  // strncmp
#include <stdbool.h>

/** @fn int main(void)
 *  @brief 月の番号を表示する
 *
 *  入力：
 *  - 標準入力から，文字列（月の名前）が与えられる
 *  - 文字列が複数与えられる場合，空白で区切られている．
 *
 *  出力：
 *  - 与えられた月名の文字列に対応する月の数値を表示する（表示後は改行する）．
 *  - 月名の文字列が複数与えられている場合，上記の処理を繰り返す．
 *  - "end"という文字列が入力された場合，その時点で終了する．
 *  - 月名ではない文字列が入力された場合，何も表示しない．
 *
 *  入力例：
\verbatim
January March Avril December
\endverbatim
  *  出力例：
\verbatim
1
3
12
\endverbatim
  *  入力例：
\verbatim
January end March Avril December
\endverbatim
  *  出力例：
\verbatim
1
\endverbatim
 *  @date   2016/10/02
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  char* year[] = {"January",
                  "February",
                  "March",
                  "April",
                  "May",
                  "June",
                  "July",
                  "August",
                  "September",
                  "October",
                  "November",
                  "December"};

  int len = 100;
  char input[100];
  bool is_end = false;

  while (!is_end) {
    int return_value = scanf("%99s", input);

    if (return_value == 0 ||    // if input didn't match to %s
        return_value == EOF) {  // if there are no input
      break;                    // break while
    }

    // if input is "end"
    if (strncmp(input, "end", len) == 0) {
      break;  // break while
    }

    char s1[100];

    for (int month = 0; month < 12; month++) {
      if (strncmp(input, year[month], 4) == 0) {
        printf("%d\n", month + 1);

        // inputとyear[month]が等しいかどうかを判定してください
      }
    }
  }

  return 0;
}
