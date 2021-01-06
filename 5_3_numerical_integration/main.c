/**  @file main.c
 *   @brief  矩形近似による数値積分
 *   @date   2016/12/15
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>
#include <stdlib.h>  // atoi, atof
#include <math.h>    // sin, cos
#include <string.h>  // strncmp

/** @fn double linear(double x)
 *  @brief 1次関数
 */
double linear(double x) {
  double a = 2.0, b = 0.5;
  return a * x + b;
}
/** @fn double quad(double x)
 *  @brief 2次関数
 */
double quad(double x) {
  double a = 2.0, b = 0.5, c = 1.0;
  return a * x * x + b * x + c;
}

/** @fn int main(int argc, char* argv[])
 *  @brief 矩形近似による数値積分
 *
 *  次の近似式による数値積分を行う．
 *  \f$ \int_a^b f(x) dx \approx \sum_{i=1}^{n} f(x_i) \frac{b-a}{n} \f$
 *
 *  コマンドラインオプション：
 *  - 1つ目：被積分関数f(x)（linear, quad, sin, conのいずれか）
 *  - 2つ目：a
 *  - 3つ目：b，ただしa < b
 *  - 4つ目：n，ただし0 < n
 *
 *  出力：
 *  - 積分結果を小数点第5位まで表示（%.5f）
 *  - 次の場合は，何も表示せずに終了する（return 0で）．
 *    被積分関数のオプションに上記4つの関数以外を指定した場合．
 *    aがb以上の場合．
 *    nが負の場合．
 *
 *  実行例：
\verbatim
./main linear 0 10 1000
\endverbatim
  *  出力例：
\verbatim
105.10500
\endverbatim
 *  実行例：
\verbatim
./main sin 0 10 100000
\endverbatim
  *  出力例：
\verbatim
1.83904
\endverbatim
 *  実行例：
\verbatim
./main log 0 10 100
\endverbatim
  *  出力例：
\verbatim
\endverbatim
 *  @date   2016/12/15
 *  @author 佐伯雄飛，B162392
 */
int main(int argc, char* argv[]) {
  if (argc < 5) {
    return 0;
  }

  double (*f)(double);  // function pointer

  if (strncmp("linear", argv[1], 10) == 0) {
    f = linear;
  } else if (strncmp("quad", argv[1], 10) == 0) {
    f = quad;
  } else if (strncmp("sin", argv[1], 10) == 0) {
    f = sin;
  } else if (strncmp("cos", argv[1], 10) == 0) {
    f = cos;
  } else {
    return 0;
  }

  double a = atof(argv[2]);
  double b = atof(argv[3]);
  if (a >= b) {
    return 0;
  }
  int n = atoi(argv[4]);
  if (n <= 0) {
    return 0;
  }

  double h = (b - a) / n;
  double integral = 0.0;

  for (double x = a; x <= b; x += h) {
    integral += f(x) * h;
  }

  printf("%.5f\n", integral);

  return 0;
}
