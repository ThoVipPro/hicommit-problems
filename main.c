#include <stdio.h>

int main() {
  double gpa, min;
  int abs;
  scanf("%lf", gpa);
  scanf("%lf", min);
  scanf("%d", abs);
  if(abs > 3){
    printf("FAIL_ATTENDANCE");
    return 0;
  }else if(min < 4.0f){
    printf("FAIL_SUBJECT");
    return 0;
  }else if((gpa >= 8.0f) && (min >= 7.0f)){
    printf("EXCELLENT");
    return 0;    
  }else if((gpa >= 6.5f) && (min >= 5.0f)){
    printf("GOOD");
    return 0;    
  }else if((gpa >= 5.0f) && (min >= 4.0f)){
    printf("PASS");
    return 0;    
  }else   printf("FAIL");return 0;  
}