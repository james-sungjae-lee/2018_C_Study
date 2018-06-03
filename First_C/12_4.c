#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p, *s;
  int i, j;

  printf("malloc() 함수 사용\n");
  p = (int*)malloc(sizeof(int)*10);

  for (size_t i = 0; i < 10; i++)
    printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, p[i]);

    free(p);

    printf("\n calloc() 함수 사용\n");

    s = (int*)calloc(sizeof(int),10);

    for (size_t j = 0; j < 10; j++)
      printf("할당된 곳의 초기값 s[%d] ==> %d\n", j, s[j]);

      free(s);
}
