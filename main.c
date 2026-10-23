#include <stdio.h>

int main() {
  loat a;
  scanf("%f",&a);
  if(a < 18.5 ){
    printf("UNDERWEIGHT");
    return 0;
  }else if(a < 25){
    printf("NORMAL");
    return 0;
  }  else if(a < 30){
    printf("OVERWEIGHT");
    return 0;}
  else printf("OBESE");
  return 0;
}