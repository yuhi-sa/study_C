
/** @fn char lower2upper(char c)
 *  @brief  アルファベット小文字だけを大文字に変換する
 *
 *  仕様：
 *  - アルファベット小文字(aからz)：大文字(AからZ)に変換して返す
 *  - それ以外の文字：そのまま返す
 *
 *  @param  c 文字（char型）
 *  @return 変換した文字（char型）
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392
 */
char lower2upper(char c) {
  if (c >= 97 && c <= 122) {
    c = c - 32;
  }
}
