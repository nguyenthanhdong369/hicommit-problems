#include <stdio.h>

int main() {
  float w, h, BMI;
  scanf("%f %f",&w,&h);
  BMI = w/(h/100)^2;
  if(BMI<18.5) printf("UNDERWEIGHT");
  else if(18.5 ≤ BMI < 25) printf("NORMAL");
  else if(25 ≤ BMI < 30) printf("OVERWEIGHT");
  else if(BMI ≥ 30) printf("OBESE");
  return 0;
}