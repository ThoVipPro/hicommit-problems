#include <stdio.h>
int main() {
  float w,h;
  scanf("%f%f",&w,&h);
  int a = w/((h/100)*(h/100));
  if(a < 18.5 ){
    printf("UNDERWEIGHT");
    return 0;
  }else if( a < 25){
    printf("NORMAL");
    return 0;
  } else if(a < 30){
    printf("OVERWEIGHT");
    return 0;
  } else printf("OBESE");
  return 0;
}