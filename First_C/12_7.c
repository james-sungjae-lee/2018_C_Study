#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char* p[3];
  char imsi[100];
  int i, size;

  for (int i = 0; i < 3; i++) {
    printf("%d 번째 문자열 : ",i+1);
    scanf("%s",imsi);

    size = strlen(imsi);
    p[i] = (char*)malloc((sizeof(char)*size)+1);

    strncpy(p[i],imsi,size+1);

  }

  printf("\n --입력과 반대로 출력(포인터)--\n");
  for ( i = 2; i >= 0; i--) {
    printf("%d : %s\n", i+1 , p[i]);
    /* code */
  }
  for (size_t i = 0; i < 3; i++) {
    free(p[i]);
  }
}
