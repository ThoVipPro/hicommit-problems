#include <stdio.h>

int main() {
  double gpa, min;
  int abs;
  scanf("%lf %lf %d", gpa, min, abs);
  if(abs > 3){
    printf("FAIL_ATTENDANCE");return 0;
  }else if(min < 4.0){
    printf("FAIL_SUBJECT");return 0;
  }else if((gpa >= 8.0) && (min >= 7.0)){
    printf("EXCELLENT");return 0;    
  }else if((gpa >= 6.5) && (min >= 5.0)){
    printf("GOOD");return 0;    
  }else if((gpa >= 5.0) && (min >= 4.0)){
    printf("PASS");return 0;    
  }else   printf("FAIL");return 0;  
}