/**  @file main.c
 *   @brief  GPAの計算
 *   @date   2017/1/10
 *   @author 佐伯雄飛
 *   @author B162392
 */

#include <stdio.h>

/** @fn int main(int argc, char* argv[])
 *  @brief GPAの計算
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
 *  - 各学生について，GPAを計算する．
 *  - ある講義の成績：点数が90点〜100点とき，秀．
 *                 点数が80点〜89点とき，優．
 *                 点数が70点〜79点とき，良．
 *                 点数が60点〜69点とき，可．
 *  - ある講義の点数が60点以上のとき，その講義に合格し，2単位を取得する．
 *  - GPA = (秀の単位数 * 4 + 優の単位数 * 3 + 良の単位数 * 2 + 可の単位数 * 1)
 *           / (総登録単位数 * 4)
 *           * 100
 *  - 出力は，学生番号（%06d），GPA（%.2f）の順に，空白で区切り，改行する．
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
002487 48.75
023065 48.75
038034 42.50
038177 45.00
044436 57.50
050530 46.25
...
874131 62.50
875426 47.50
880624 43.75
881667 50.00
882464 57.50
886516 38.75
886870 56.25
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

  for (int s = 0; s < num_students; s++) {
    float a = 0;
    float b = 0;
    for (int c = 0; c < num_class; c++) {
      scanf("%d", &student_id);
      scanf("%d", &class_code);
      scanf("%d", &score);
      if (score >= 90)
        a += 4;
      else if (score >= 80)
        a += 3;
      else if (score >= 70)
        a += 2;
      else if (score >= 60)
        a += 1;
    }
    int d = num_class * 4;
    b = a / d * 100;

    printf("%06d %.2f\n", student_id, b);
  }

  return 0;
}
