#include <stdio.h>

int main() {
  int a;
  long long kq;
  scanf("%d",&a);
  if(a <= 50){
    kq = a*1678;
  }else   if(a <= 100){
    kq = 83900 + ((a-50) * 1734 );
    printf("%d",kq);
    return 0;
  }  else   if(a <= 200){
    kq = (83900 + 86700 + ((a-100) *2014));
      printf("%d",kq);
    return 0;
  }  else  if(a <= 300){
      kq = (83900 + 86700 + 201400 + (a-200) *2536);
      printf("%d",kq);
      return 0;
  }else  if(a <= 400){
     kq = (83900 + 86700 + 201400 + 253600 + (a-300)*2834);
    printf("%d",kq);
    return 0;
  }
  else {    
    kq = (83900 + 86700 + 201400 + 253600 + 283400 + (a - 400)*2927LL);
    printf("%d",kq);
  }
  return 0;
}