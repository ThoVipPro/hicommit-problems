#include <stdio.h>
int main() {
  float n;
  scanf("%f", &n);
  if(n < 4.0){
    printf("F\n");
    return 0;
  }else  if(n <= 4.9){
    printf("D\n");
    return 0;
  }else  if(n <= 5.4){
    printf("D+\n");
    return 0;
  }else   if(n <= 6.4){
    printf("C\n");
    return 0;
  }else   if(n <= 6.9){
    printf("C+\n");
    return 0;
  }else   if(n <= 7.9){
    printf("B\n");
    return 0;
  }else   if(n <= 8.9){
    printf("B+\n");
    return 0;
  }else printf("A\n");
}