#include <stdio.h>
int main() {
  float n;
  scanf("%f", &n);
  if(n < 4.0){
    printf("F\n");
    return 0;
  }else  if(n < 5){
    printf("D\n");
    return 0;
  }else  if(n < 5.5){
    printf("D+\n");
    return 0;
  }else   if(n < 6.5){
    printf("C\n");
    return 0;
  }else   if(n < 7 ){
    printf("C+\n");
    return 0;
  }else   if(n < 8){
    printf("B\n");
    return 0;
  }else   if(n < 9){
    printf("B+\n");
    return 0;
  }else printf("A\n");
}