#include <stdio.h>

int main() {
   double gpa, min;
   int abs;
   scanf("%lf %lf %d",&gpa,&min,&abs);

  if(min<4.0) printf("FAIL_SUBJECT");
  else if(abs>3) printf("FAIL_ATTENDANCE");
  else if(gpa>=8.0 && min>=7.0) printf("EXCELLENT");
  else if(gpa>=6.5 && min>=5.0) printf("GOOD");
  else if(gpa>=5.0 && min>=4.0) printf("PASS");
  else printf("FAIL");
  return 0;
}