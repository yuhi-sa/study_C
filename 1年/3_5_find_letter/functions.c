
/** @fn int find_letter(char x, char str[])
 *  @brief  文字列str中の文字xの位置を返す
 *
 *  仕様：
 *  - 文字列の最初の文字がxであれば0，
 *    2番目の文字がxであれば1，（以下同文）とする．
 *  - 2回以上xが出現する場合には，最初の位置を返す
 *
 *  @param  x 検索する文字（char型）
 *  @param  str 検索対象の文字列（char[]型）
 *  @return 文字xの位置（int型）．
 *          ただし文字xが文字列str中に存在しない場合には-1を返す．
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392


 */

int find_letter(char x, char str[]) {
  int j;
  int a;

  for (j = 0; str[j] != '\0'; j++) {
    if (str[j] == x) {
      a = j;
      break;
    } else {
      a = -1;
    }
  }

  return a;
}
