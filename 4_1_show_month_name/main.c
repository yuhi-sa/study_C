/**  @file main.c
 *   @brief  月の英語名を表示する
 *   @date   2016/11/24
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>
#include <stdlib.h>   // atoi()
#include <stdbool.h>  // bool

/** @fn     void show_month_name(char *month)
 *  @brief  文字列monthをprintfで表示する
 *  @param  month 表示する文字列
 *  @date   2016/06/08
 *  @author Toru Tamaki
 */
void show_month_name(char* month) {
  printf("%s\n", month);
}

/** @fn int main(void)
 *  @brief 月の英語名を表示する
 *
 *  入力：
 *  - 標準入力から，1から12までの数字が与えられる
 *  - 数字が複数与えられる場合，空白で区切られている．
 *
 *  出力：
 *  - 与えられた数字に対応する月の名前を表示する（表示後は改行する）．
 *  - 数字が複数与えられている場合，上記の処理を繰り返す．
 *  - 1から12までの数字ではないものが入力された場合，その時点で終了する．
 *
 *  入力例：
\verbatim
1 2 5
\endverbatim
  *  出力例：
\verbatim
January
February
May
\endverbatim
  *  入力例：
\verbatim
1 2 12 55 1
\endverbatim
  *  出力例：
\verbatim
January
February
December
\endverbatim
 *  @date   2016/10/02
 *  @author 自分の名前，学生番号
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
  char command[100];
  bool is_end = false;

  while (!is_end) {
    int return_value = scanf("%99s", command);

    if (return_value == 0 ||    // if input didn't match to %s
        return_value == EOF) {  // if there are no input
      break;
    }

    int n = atoi(command);  // conversion from string to int

    if (1 <= n && n <= 12) {
      printf("%s\n", year[n - 1]);

      // ここで show_month_nameを呼び出してください

    } else {
      is_end = true;
    }
  }

  return 0;
}
