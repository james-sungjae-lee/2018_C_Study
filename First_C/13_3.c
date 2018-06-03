#include <stdio.h>

int main(){

  struct student{

    char name[10];
    int kor;
    int eng;
    float avg;
  };

  struct student s;

  printf("이름 : ");
  scanf("%s", s.name, 9);

  printf("국어점수 : ");
  scanf("%d", &s.kor);

  printf("영어점수 : ");
  scanf("%d", &s.eng);

  s.avg = (s.kor + s.eng) / 2.0f;

  printf("\n --구조체 활용-- \n");
  printf("학생 이름 ==> %s \n", s.name);
  printf("국어 점수 ==> %d \n", s.kor);
  printf("영어 점수 ==> %d \n", s.eng);
  printf("평균 점수 ==> %5.1f \n", s.avg);
}

// ers/sungjae/Developer/13_3.c:16:23: warning: data argument
// not used by format string [-Wformat-extra-args]
// scanf("%s", s.name, 9);
// ~~~~ ^
// /Users/sungjae/Developer/13_3.c:24:3: error: use of undeclared identifier 'avg'
// avg = (s.kor + s.eng) / 2.0f;
// ^
// 1 warning and 1 error generated.
