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
  }else if(min < 4.0.f){
    printf("FAIL_SUBJECT");
    return 0;
  }else if((gpa >= 8.0.f) && (min >= 7.0.f)){
    printf("EXCELLENT");
    return 0;    
  }else if((gpa >= 6.5.f) && (min >= 5.0.f)){
    printf("GOOD");
    return 0;    
  }else if((gpa >= 5.0.f) && (min >= 4.0.f)){
    printf("PASS");
    return 0;    
  }else   printf("FAIL");return 0;  
}