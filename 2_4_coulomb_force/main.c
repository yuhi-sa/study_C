/**  @file main.c
 *   @brief  2つの静電荷間に働く力の計算
 *   @date   2016/10/27
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(void)
 *  @brief  2つの静電荷間に働く力の計算
 *
 *  標準入力から2つの静電荷の電荷量と3次元座標を読み込み，
 *  その間に働く力をクーロンの法則により求める
 *
 *  入力：
 *  - 標準入力の最初の実数は，1つ目の静電荷の電荷量
 *  - それに引き続く3個の実数は1つ目の静電荷の座標(x,y,z)
 *  - 次に続く実数は，2つ目の静電荷の電荷量
 *  - それに引き続く3個の実数は2つ目の静電荷の座標(x,y,z)
 *
 *  出力：
 *  - 2つの静電荷間に働く力を計算し，表示する．
 *  - 数値は指数形式で，小数点第6位まで表示する(%.6e)．
 *
 *  入力例：
\verbatim
0.000308699789318
0.000402224300987 0.000279583777408 0.000174189877294
-0.000239153024041
-5.80356914685e-05 -0.000160431721634 -6.19990827336e-05
\endverbatim
  *  出力例：
\verbatim
1.440554e+09
\endverbatim
  *  入力例：
\verbatim
5.89869864357e-05
-0.000307976825127 -0.000255850688569 -0.000440580236465
-0.000381973244918
-0.000129578394884 -0.000480165202626 -0.000181748151379
\endverbatim
  *  出力例：
\verbatim
-1.359709e+09
\endverbatim
 *
 *  @date   2016/10/27
 *  @author 佐伯雄飛，B162392
 */

int main(void) {
  float k0 = 9.0e9;      // about 9.0 x 10^9 [N m^2 / C^2]
  float q[2];            // charges of two particles [C]
  float r[2][3];         // 3D coordinates of two particles [m]
  float distance = 0.0;  // (square of) distance between two particles
  float tempt;
  for (int i = 0; i < 2; i++) {
    scanf("%e", &q[i]);  // ここでqを読み込む
    for (int j = 0; j < 3; j++) {
      scanf("%e", &r[i][j]);  // ここでrを読み込む
    }
  }

  for (int j = 0; j < 3; j++) {
    float temp = r[0][j] - r[1][j];
    distance += temp * temp;
  }
  // ここでdistanceを計算する

  float F;
  if (distance > 0) {
    F = k0 * q[0] * q[1] / distance;  // [N]
  } else {
    F = 0;
  }

  printf("%.6e", F);
  printf("\n");
  // ここでFを表示する

  return 0;
}
