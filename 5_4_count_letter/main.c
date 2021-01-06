/**  @file main.c
 *   @brief  文字列中の，指定文字，空白，改行の個数を判定する
 *   @date   2016/12/15
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(int argc, char* argv[])
 *  @brief 文字列中の，指定文字，空白，改行の個数を判定する
 *
 *  入力：
 *  - コマンドライン引数に検索するべき文字xが1つ与えられる
 *  - 標準入力には検索対象の，空白と改行を含む文字列が与えられる．
 *    長さは不明．
 *
 *  出力：
 *  - 文字列に含まれる文字x，空白，改行の個数をこの順番に（%dで）表示する．
 *  - コマンドライン引数にxが与えられなければ，何も表示せずに終了する（return
0で）．
 *
 *  実行例：
\verbatim
./main g
\endverbatim
 *  入力例：
\verbatim
HrPY cVU vY SlY px id GcW uRwtjN
FsZ wI sDfLXbmZZ
ITkdflQCR DVLDv ab msBDDjHv qBxyp NtCmV
\endverbatim
  *  出力例：
\verbatim
0 14 3
\endverbatim
 *  実行例：
\verbatim
./main X
\endverbatim
  *  入力例：
\verbatim
iuu AOpwGMlb
BeaWBqs CtDucG wWSgAw KnO BkuALSut EhSHco
XCud FoAAxxQ hHxggrgVu HGGj rUtc GyA NGcnDEoz ZcSD KBMoinMVR
vbdC wtKJermD xr YJVJAEY SBpIrJCbn avrQynkvJ MMDcXf cAYrgj
\endverbatim
  *  出力例：
\verbatim
2 21 4
\endverbatim
 *  実行例：
\verbatim
./main
\endverbatim
  *  入力例：
\verbatim
BeaWBqs CtDucG wWSgAw KnO BkuALSut EhSHco
\endverbatim
  *  出力例：
\verbatim
\endverbatim
 *  @date   2016/12/15
 *  @author 佐伯雄飛，B162392
 */

int main(int argc, char* argv[]) {
  int i = 0;
  char a = argv[2];
  if (argc <= 1) {
    return 0;
  }
  char letter = argv[1][0];

  int count_linebreak = 0;
  int count_number = 0;
  int count_space = 0;
  char c;

  while ((c = getchar()) != EOF) {  // EOF is the end of stdin
    if (letter == c) {
      count_number++;
    } else if (' ' == c) {
      count_space++;
    } else if ('\n' == c) {
      count_linebreak++;
    }
  }

  printf("%d %d %d\n", count_number, count_space, count_linebreak);

  return 0;
}
