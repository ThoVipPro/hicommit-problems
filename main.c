#include <stdio.h>

int main() {
  int d, m , y;
  if(d > 0 && d < 32){
    if( m = 1 || m = 3 || m = 5 || m = 7 || m =8 || m =10 || m=12){
      printf("VALID");
      return 0;
    } else if(m = 29 && m = 2 && ((y % 400 ) == 0 )) {
      printf("VALID");
      return 0;
    } else if((d < 28 && m = 2) || (d > 31 && m != 2)){
            printf("VALID");
        return 0;
    }else  printf("INVALID");
  }else printf("INVALID");


}