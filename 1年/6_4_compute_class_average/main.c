/**  @file main.c
 *   @brief  各講義の平均点数の計算
 *   @date   2017/1/10
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(int argc, char* argv[])
 *  @brief 各講義の平均点数の計算
 *
 *  入力：
 *  - 標準入力には，まず学生数が与えられる
 *  - 続いて講義数が与えられる．それに引き続いて，
 *    空白で区切られた講義コード（6桁）が講義数分与えられる．
 *  - 続いて「学生番号（6桁），講義コード，素点（100点満点）」が
 *    （空白で区切られて）与えられる．
 *    このフォーマットは，一人の学生について異なる講義コードが連続しており，
 *    その学生の成績がすべて与えられたら，別の学生の成績が与えられる．
 *  - 仮定：すべての学生は同じ講義を受講していると仮定する
 *    （入力はこの仮定を満たしている）
 *
 *  出力：
 *  - 各講義について，点数の平均を計算する．
 *  - 出力は，講義コード（%06d），平均点数（%.2f）の順に，
 *    空白で区切り，改行する．
 *
 *  入力例（途中省略）：
\verbatim
150
20
030323 044417 112271 166084 230334 288383 304507 343261 375762 408164 415311
417011 467643 486000 518187 618065 674215 712181 755421 883186
002487 030323 74
002487 044417 41
002487 112271 64
002487 166084 38
002487 230334 72
002487 288383 82
002487 304507 67
...
886870 417011 85
886870 467643 61
886870 486000 75
886870 518187 88
886870 618065 76
886870 674215 73
886870 712181 69
886870 755421 90
886870 883186 83
\endverbatim
  *  出力例（途中省略）：
\verbatim
030323 74.45
044417 73.74
112271 74.32
166084 73.37
230334 74.24
288383 75.61
304507 72.55
343261 74.65
375762 73.11
408164 75.78
415311 73.08
417011 75.40
467643 75.54
486000 73.74
518187 74.99
618065 72.73
674215 74.75
712181 73.20
755421 73.99
883186 75.33
\endverbatim
 *  @date   2017/1/10
 *  @author 佐伯雄飛，B162392
 */
int main(int argc, char* argv[]) {
  int num_students;
  scanf("%d", &num_students);

  int num_class;
  scanf("%d", &num_class);

  int class_codes[num_class];
  for (int i = 0; i < num_class; i++) {
    scanf("%d", &class_codes[i]);
  }

  int student_id, class_code, score;

  int class[num_class];

  for (int c = 0; c < num_class; c++) {
    class[c] = 0;
  }

  for (int s = 0; s < num_students; s++) {
    for (int c = 0; c < num_class; c++) {
      scanf("%d", &student_id);
      scanf("%d", &class_code);
      scanf("%d", &score);
      class[c] += score;
    }
  }

  float class2[num_class];
  for (int i = 0; i < num_class; i++) {
    class2[i] = (float)class[i] / num_students;
  }

  for (int i = 0; i < num_class; i++) {
    printf("%06d %.2f\n", class_codes[i], class2[i]);
  }

  return 0;
}
