#include <stdio.h>

int main() {
  int a;
  long long kq;
  scanf("%d",&a);
  if(a <= 50){
    kq = a*1678;
  }else   if(a <= 100){
    kq = ( 50 * 1678) + ((a-50) * 1734 );
    printf("%l",kq);
    return 0;
  }  else   if(a <= 200){
    kq = (( 50 * 1678) + (50 * 1734) + ((a-100) *2014));
      printf("%l",kq);
    return 0;
  }  else  if(a <= 300){
      kq = (( 50 * 1678) + (50 * 1734) + (100 * 2014) + (a-200) *2536);
      printf("%l",kq);
      return 0;
  }else  if(a <= 400){
     kq = (( 50 * 1678) + (50 * 1734) + (100 * 2014) + 100 *2536 + (a-300)*2834);
    printf("%l",kq);
    return 0;
  }
  else {    
    kq = (( 50 * 1678) + (50 * 1734) + (100 * 2014) + (100 *2536)+ 100*2834 + (a - 400)*2927LL;
    printf("%d",kq);
  }
  return 0;
}