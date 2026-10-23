#include <stdio.h>

int main() {
  double w, h;
  scanf("%lf %lf",&w,&h);
  float bmi=w/((h/100)*(h/100));
  if( bmi <18.5) printf("UNDERWEIGHT");
  else if( bmi< 25.0) printf("NORMAL");
  else if( bmi < 30.0) printf("OVERWEIGHT");
  else  printf("OBESE");
  return 0;
}