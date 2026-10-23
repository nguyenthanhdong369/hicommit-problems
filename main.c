#include <stdio.h>

int main() {
  float w, h;
  scanf("%f %f",&w,&h);
  float BMI = w/(h/100)^2;
  if(BMI<18.5) printf("UNDERWEIGHT");
  else if(BMI < 25) printf("NORMAL");
  else if(BMI < 30) printf("OVERWEIGHT");
  else  printf("OBESE");
  return 0;
}