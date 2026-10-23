#include <stdio.h>

int main() {
  float w, h;
  scanf("%f %f",&w,&h);
  float bmi=(w/((h/100)*(h/100))
  if( bmi <18.5) printf("UNDERWEIGHT");
  else if( bmi< 25.0) printf("NORMAL");
  else if( bmi < 30.0) printf("OVERWEIGHT");
  else  printf("OBESE");
  return 0;
}