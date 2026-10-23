#include <stdio.h>

int main() {
  float a,b;
  scanf("%f%f",&a,&b);
  if((a >= 9) && (b >= 90)){
    printf("HOC_BONG_XUAT_SAC");
    return 0;
  }else if((a >= 8) && (b >= 80)){
    printf("HOC_BONG_GIOI");
    return 0;
  }  else if((a >= 7) && (b >= 70)){
    printf("HOC_BONG_KHA");
    return 0;
  }  else  printf("KHONG_DAT");
  
  return 0;
}