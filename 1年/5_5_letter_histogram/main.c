/**  @file main.c
 *   @brief  文字列中の，大文字と小文字のヒストグラムを作成する
 *   @date   2016/12/15
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>
#include <stdlib.h>  // malloc
#include <ctype.h>   // isuppter, islower

/** @fn int main(int argc, char* argv[])
 *  @brief 文字列中の，大文字と小文字のヒストグラムを作成する
 *
 *  入力：
 *  - 標準入力には検索対象の，空白と改行を含む文字列が与えられる．
 *    長さは不明（ただしmax_int以下とする）．
 *
 *  出力：
 *  - 文字列に含まれる大文字の数を，AからZの順番に（%5dで）表示し，改行する．
 *  - 文字列に含まれる小文字の数を，aからzの順番に（%5dで）表示し，改行する．
 *
 *  入力例：
\verbatim
dpMhhyPmc yI DT iJUXpNfh RpV PPWJGvcE nuUB jqYjBrPqs
cS ysO rDE eRiZNQS YjwrGKI Ujg
OeurKNK zTSGVHej SxR iDmueNb
\endverbatim
  *  出力例（フォーマットの都合上改行されています）：
\verbatim
    0     2     0     3     2     0     3     1     2     2     3     0     1
4     2     4     1     3     4     2     3     2     1     1     2     1
    0     1     3     1     4     1     1     3     3     5     0     0     2
1     0     3     2     4     2     0     3     1     1     1     3     1
\endverbatim
  *  入力例：
\verbatim
YjbiSz VdGaIJ
kJSJQNxNX YoPZY Rwe
FX zUUCazG lttNJ dVeNwI ZMEyXkOmg XGHW VBHJ
MkcR LdZT KHO LI InoJhFI
Yo JKSBedv CEgYo xvulXS pIIC wFj Lw
MRvqx mz gMMhJ
qfDxEn DNX wdtGFdtBa uektgqxS EKDteMYG pJq
Wdi XXLjM scXkn soxPTZs yNQggfT WTpEb
\endverbatim
  *  出力例（フォーマットの都合上改行されています）：
\verbatim
    0     3     3     3     5     4     5     3     7     9     3     4     7
6     2     2     2     3     5     4     2     3     3     9     6     4
    3     2     2     7     5     2     6     2     2     3     5     2     2
3     5     3     4     0     3     6     2     3     5     6     2     4
\endverbatim
 *  @date   2016/12/15
 *  @author 佐伯雄飛，B162392
 */
int main(int argc, char* argv[]) {
  int* lower_letter_histogram;
  int* upper_letter_histogram;

  lower_letter_histogram = (int*)malloc(26 * sizeof(int));
  upper_letter_histogram = (int*)malloc(26 * sizeof(int));
  if (lower_letter_histogram == NULL || upper_letter_histogram == NULL) {
    printf("can't alloc memory\n");
    exit(0);
  }

  char c;
  while ((c = getchar()) != EOF) {  // EOF is the end of stdin
    if (isupper(c)) {
      upper_letter_histogram[c -= 'A']++;
      // 大文字ヒストグラム用のコードを書いてください
    }
    if (islower(c)) {
      lower_letter_histogram[c -= 'a']++;
      // 小文字ヒストグラム用のコードを書いてください
    }
  }

  for (int i = 0; i < 26; i++) {
    printf("%5d ", upper_letter_histogram[i]);
  }
  printf("\n");
  for (int i = 0; i < 26; i++) {
    printf("%5d ", lower_letter_histogram[i]);
  }
  printf("\n");

  free(lower_letter_histogram);
  free(upper_letter_histogram);

  return 0;
}
