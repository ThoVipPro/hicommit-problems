#include <stdio.h>

int main() {
  float a;
  scanf("%1.f",&a);
  if(a >= 30 ){
    printf("OBESE");
    return 0;
  }else if( a >= 25){
    printf("OVERWEIGHT");
    return 0;
  } else if(a >= 18.5){
    printf("NORMAL");
    return 0;
  } else printf("OBESE");
  return 0;
}