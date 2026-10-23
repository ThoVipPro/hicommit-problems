#include <stdio.h>
int main() {
  float n;
  scanf("%f", &n);
  if(n < 4.0){
    printf("F");
    return 0;
  }else  if(n <= 4.9){
    printf("D");
    return 0;
  }else  if(n <= 5.4){
    printf("D +");
    return 0;
  }else   if(n <= 6.4){
    printf("C");
    return 0;
  }else   if(n <= 6.9){
    printf("C +");
    return 0;
  }else   if(n <= 7.9){
    printf("B");
    return 0;
  }else   if(n <= 8.9){
    printf("B +");
    return 0;
  }else printf("A");
}