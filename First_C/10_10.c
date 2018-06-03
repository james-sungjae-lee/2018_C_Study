#include <stdio.h>

char c;
char d;

void func1(char a, char b/* arguments */) {
  /* code */
  int imsi;

  imsi = a;
  a = b;
  b = imsi;

  c = a;
  d = b;
}

void func2(char *a, char *b) {
  int imsi;

  imsi = *a;
  *a = *b;
  *b = imsi;
}

int main( /* arguments */) {
  /* code */
  char x = 'A', y = 'Z';

  printf("원래 값      : x = %c, y=%c\n",x, y );

  func1( x,y );
  printf("값을 전달한 후  : x = %c, y=%c\n",x,y );

  func2( &x,&y );
  printf("주소를 전달한 후 : x=%c, y=%c\n",x,y );

  printf("func1에 저장된 값 : a = %c, b = %c\n", c,d);
}
