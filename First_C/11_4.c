#include <stdio.h>
#include <string.h>

int main (void){
  char password[5] = "5678";
  char input[5];
  int i;

  printf("비밀번호 4글자를 입력하세요 : " );
  for ( i = 0; i < 4; i++){
    input[i] = getchar();
  }

    if( strncmp(password, input, 4) == 0) {
      printf("\n비밀번호 통과\n");
    }
else{
  printf("\n입력한 비밀번호 \n");

for ( i = 0; i < 4 ; i++)
  putchar(input[i]);

  printf("가 틀렸음\n" );

}
}
