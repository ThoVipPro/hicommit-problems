#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  if(a == 1){
    printf("XEP_LOAI_XUAT_SAC");
    return 0;
  }else if(a == 2){
    printf("XEP_LOAI_GIOI");
    return 0;
  }  else if(a == 3){
    printf("XEP_LOAI_KHA");
    return 0;
  }  else if(a == 4){
    printf("XEP_LOAI_TRUNG_BINH");
    return 0;
  }
  else printf("KHONG_HOP_LE");
  return 0;
}