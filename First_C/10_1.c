#include <stdio.h>

int main()
{
  int coffee;

  printf("어떤 커피 드릴까요? (1: 보통 2: 설탕 3: 블랙)");
  scanf("%d",&coffee);

  printf("\n# 1. 뜨거운 물을 준비한다 \n" );
  printf("\n# 2. 종이컵을 준비한다\n" );

switch (coffee) {
  case 1:  printf("\n# 3. 보통커피를 탄다 \n" );
  case 2:  printf("\n# 3. 설탕커피를 탄다 \n" );
  case 3:  printf("\n# 3. 블랙커피를 탄다 \n" );
  default :  printf("\n# 3. 아무거나 탄다 \n" );
}
printf("\n# 4. 물을 붓는다 \n" );
printf("\n# 5. 스푼으로 저어서 녹인다.\n \n" );

printf("손님~ 커피 여기 있습니다. \n\n");

}
