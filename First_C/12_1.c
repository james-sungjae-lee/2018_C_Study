#include <stdio.h>

int main(){
  int aa[3];
  int *p;
  int i, hap = 0;

  for (size_t i = 0; i < 3; i++) {
    printf("%d 번째 숫자 : ",i+1);
    scanf("%d", &aa[i]);
  }

  p = aa;

  for (size_t i = 0; i < 3; i++)
    hap = hap + *(p+i);

    printf("입력 숫자의 합 ==> %d\n", hap );

}
