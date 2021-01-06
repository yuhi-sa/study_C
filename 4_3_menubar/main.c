/**  @file main.c
 *   @brief  メニュー項目を表示する
 *   @date   2016/11/24
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>
#include <stdbool.h>  // bool

/** @fn     void show_items(char *items[], int n)
 *  @brief  メニュー項目を表示する
 *  @param  items メニュー項目
 *  @param  n 項目数
 *  @date   2016/06/08
 *  @author Toru Tamaki
 */
void show_items(char* items[], int n) {
  for (int i = 1; i <= n; i++) {
    printf("%s ", items[i]);
  }
  printf("\n");
}

/** @fn     show_menu(char **menu[], int n)
 *  @brief  メニューを表示する
 *  @param  menu メニュー
 *  @param  n メニュー数
 *  @date   2016/06/08
 *  @author Toru Tamaki
 */
void show_menu(char** menu[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%s ", menu[i][0]);
  }
  printf("\n");
}

/** @fn int main(void)
 *  @brief メニュー項目を表示する
 *
 *  入力：
 *  - 標準入力から，メニュー項目を表すアルファベット1文字が与えられる
 *  - もしくは終了(quit)を意味する'q'が与えられる
 *  - 文字が複数与えられる場合，空白（もしくは改行）で区切られている
 *
 *  出力：
 *  - メニューmenuを表示する
 *  -
そして入力されたアルファベット1文字に対応するメニュー項目の内容を表示する．
 *  - 文字'q'が与えられた場合，終了する．
 *  - それ以外の文字が入力された場合，menu表示に戻る
 *  -
空白（もしくは改行）の後に続けて文字が与えられた場合，上記の処理を繰り返す．
 *
 *  注意：
 *  - メニュー項目 File の場合，先頭の1文字 F が対応するアルファベットである．
 *  - 以下のコードでは4つのメニュー項目が定義されている．
\verbatim
  char *file[] = {"File(F)", "open",       "close",    "new",      "quit"};
  char *edit[] = {"Edit(E)", "undo",       "paste",    "copy",     "delete"};
  char *view[] = {"View(V)", "fullscreen", "minimize", "large",    "small"};
  char *help[] = {"Help(H)", "help",       "search",   "document", "website"};
  char **menu[] = {file, edit, view, help};
\endverbatim
 *
これら以外にもメニューを追加することを考慮して，入力文字がFかEかを判定するというコードを書かず，
 *    一般的なコードを書くこと．
 *
 *  実行例（キーボード入力の場合）：
\verbatim
$ ./main
File(F) Edit(E) View(V) Help(H)
F
open close new quit
File(F) Edit(E) View(V) Help(H)
E
undo paste copy delete
File(F) Edit(E) View(V) Help(H)
V
fullscreen minimize large small
File(F) Edit(E) View(V) Help(H)
H
help search document website
File(F) Edit(E) View(V) Help(H)
D
File(F) Edit(E) View(V) Help(H)
q
$
\endverbatim
  *  標準入力例：
\verbatim
F F E V
\endverbatim
  *  出力例：
\verbatim
File(F) Edit(E) View(V) Help(H)
open close new quit
File(F) Edit(E) View(V) Help(H)
open close new quit
File(F) Edit(E) View(V) Help(H)
undo paste copy delete
File(F) Edit(E) View(V) Help(H)
fullscreen minimize large small
File(F) Edit(E) View(V) Help(H)
\endverbatim
 *  @date   2016/11/24
 *  @author 佐伯雄飛，B162392
 */
int main(void) {
  char* file[] = {"File(F)", "open", "close", "new", "quit"};
  char* edit[] = {"Edit(E)", "undo", "paste", "copy", "delete"};
  char* view[] = {"View(V)", "fullscreen", "minimize", "large", "small"};
  char* help[] = {"Help(H)", "help", "search", "document", "website"};
  char** menu[] = {file, edit, view, help};
  int num_menu = 4;

  int len = 100;
  char input[100];
  bool is_end = false;

  while (!is_end) {
    show_menu(menu, num_menu);

    int return_value = scanf("%99s", input);

    if (return_value == 0 ||    // if input didn't match to %s
        return_value == EOF) {  // if there are no input
      break;                    // break while
    }

    if ('q' == input[0]) {  // if input is 'q'
      break;                // break while
    }
    // printf("%c",*(*menu[0]+5));
    for (int n = 0; n < num_menu; n++) {
      if (input[0] == *(*menu[n] + 5)) {
        show_items(menu[n], 4);
      }

      // 入力文字がどのメニュー項目に相当するのかを判定し，show_items()で表示してください
    }
  }

  return 0;
}
