#include <stdio.h>
///9.0 – 10.0	A
//8.0 – 8.9	B+
//7.0 – 7.9	B
//6.5 – 6.9	C+
//5.5 – 6.4	C
//5.0 – 5.4	D+
//4.0 – 4.9	D
//< 4.0	F
int main() {
  float n;
  scanf("%f", &n);
  if(n < 4.0){
    printf("F");
    return 0;
  }else   if(n <= 4.9){
    printf("D");
    return 0;
  }else   if(n <= 5.4){
    printf("D+");
    return 0;
  }else   if(n <= 6.4){
    printf("C");
    return 0;
  }else   if(n <= 6.9){
    printf("C+");
    return 0;
  }else   if(n <= 7.9){
    printf("B");
    return 0;
  }else   if(n <= 8.9){
    printf("B+");
    return 0;
  }else printf("A");
  return 0;
}