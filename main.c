#include <stdio.h>

int main() {
  float w, h;
  scanf("%f %f",&w,&h);
  if( w/(h/100)^2<18.50) printf("UNDERWEIGHT");
  else if(w/(h/100)^2 <25.0) printf("NORMAL");
  else if(w/(h/100)^2 <30.0) printf("OVERWEIGHT");
  else  printf("OBESE");
  return 0;
}