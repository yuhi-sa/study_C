
/** @fn int Fibonacci(int n)
 *  @brief  nについてのフィボナッチ数を計算する
 *
 *  フィボナッチ数\f$ F_n \f$は漸化式
 *  \f$ F_n = F_{n-1} + F_{n-2} \f$で定義される．
 *  ただし\f$ F_1 = F_2 = 1 \f$．
 *
 *  @param  n 正の整数
 *  @return フィボナッチ数(n)
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392
 */
int Fibonacci(int n) {
  int i;
  int f0 = 0;
  int f1 = 1;
  int f2 = 1;

  for (i = 1; i < n; i++) {
    f2 = f1 + f0;
    f0 = f1;
    f1 = f2;
  }

  return f2;
}

/** @fn int factorial(int n)
 *  @brief  nの階乗を計算する
 *  @param  n 正の整数
 *  @return nの階乗
 *  @date   2016/11/10
 *  @author 佐伯雄飛，B162392
 */
int factorial(int n) {
  int m;
  int f3 = 1;

  for (m = 1; m <= n; ++m) {
    f3 = f3 * m;
  }

  return f3;
}
