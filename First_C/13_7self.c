#include <stdio.h>

int main(){
  union student{
    int tot;
    char grade;
  };

  union student u;

  u.grade = 'A';
  u.tot = 300;

  printf("\n--공용체 활용--\n");
  printf("총점 ==> %d\n", u.tot);
  printf("등급 ==> %c\n", u.grade);

}
