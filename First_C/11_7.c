#include <stdio.h>

int main(void){
  char s[20];
  FILE *fp;

  fp = fopen("data1.txt", "r");

  fgets(s,20,fp);

  printf("파일에서 읽은 문자열 : ");
   putchar(s);

  fclose(fp);
}


//
// /Users/sungjae/Developer/11_7.c:12:11: warning: incompatible pointer to integer conversion passing
// 'char [20]' to parameter of type 'int' [-Wint-conversion]
// putchar(s);
// ^
// /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk/usr/
// include/stdio.h:261:17: note: passing argument to parameter here
// int putchar(int);
// ^
// 1 warning generated.
