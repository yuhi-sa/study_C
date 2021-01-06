/**  @file main.c
 *   @brief  回文の判定
 *   @date   2016/11/24
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief 回文の判定
 *
 *  入力：
 *  - 標準入力から（空白を含まない99文字以下の）文字列が与えられる．
 *
 *  出力：
 *  - 入力された文字列が回文かどうかを判定し，
 *    回文であれば1，そうでなければ0を表示する．
 *
 *  入力例：
\verbatim
fXZytlQelzKvXtcMBnttYvkZZkvYttnBMctXvKzleQltyZXf
\endverbatim
  *  出力例：
\verbatim
1
\endverbatim
 *  入力例：
\verbatim
sEFRvHhmWTQDnVLfMOChpDLRTetJdzrhMNEcmhmcENMRrzdJteTRLDphCOMfLVnDQTWmhHvRFEs
\endverbatim
  *  出力例：
\verbatim
0
\endverbatim
 *  @date   2016/11/24
 *  @author 佐伯雄飛,B162392
 */
int main(void) {
  int len = 100;
  char input[100];
  scanf("%99s", input);

  int n = 0;
  int i = 0;
  for (i = 0; i < len; i++) {
    if (input[i] != '\0')
      n++;
    else
      break;
  }

  int m = 1;

  for (i = 0; i <= n / 2; i++) {
    if (input[i] == input[n - i - 1])
      m = 1;
    else {
      m = 0;
      break;
    }
  }
  printf("%d\n", m);

  return 0;
}
