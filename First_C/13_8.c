#include <stdio.h>

int main(){
  enum week{sun, mon, tue, wed, thu, fri, sat};

  enum week ww;

  ww = sat;

  if (ww == sun) {
    printf("오늘은 일요일입니다.\n\n", ww);
  }else{
    printf("오늘은 일요일이 아닙니다.\n\n", ww);
  }
}
