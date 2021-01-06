
/** @fn float average(float x[], int n)
 *  @brief  配列の平均を計算する
 *  @param  n 配列xの要素数(n>=1)
 *  @return 配列の平均値
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392
 */
float average(float x[], int n) {
  float a = 0;
  int i;

  for (i = 0; i < n; i++) {
    a += x[i];
  }

  return a / n;
}
