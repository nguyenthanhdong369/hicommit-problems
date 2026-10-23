#include <stdio.h>

int main() {
  float w, h;
  scanf("%f %f",&w,&h);
  if( w/((h/100)*(h/100))<18.5) printf("UNDERWEIGHT");
  else if(w/((h/100)*(h/100))>=18.5  && w/((h/100)*(h/100)) < 25.0) printf("NORMAL");
  else if(w/((h/100)*(h/100))>=25 && w/((h/100)*(h/100)) < 30.0) printf("OVERWEIGHT");
  else  printf("OBESE");
  return 0;
}