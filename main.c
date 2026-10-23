#include <stdio.h>

int main() {
  int a;
  long long kq;
  scanf("%d",&a);
  if(a <= 50){
    kq = a*1678;
    printf("%d",kq);
    return 0;
  }else   if(a <= 100){
    kq = a*1734;
    printf("%d",kq);
    return 0;
  }  else   if(a <= 200){
    kq = a*2014;
    printf("%d",kq);
    return 0;
  }  else  if(a <= 300){
    kq = a*2536;
    printf("%d",kq);
    return 0;
  }else  if(a <= 400){
    kq = a*2834;
    printf("%d",kq);
    return 0;
  }
  else {    
    kq = (a - 400)*2927LL;
    printf("%d",kq);
  }
  return 0;
}