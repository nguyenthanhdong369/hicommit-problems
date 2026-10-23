#include <stdio.h>

int main() {
  float w, h;
  scanf("%f %f",&w,&h);
  if( w/((h/100))^2<18.50) printf("UNDERWEIGHT");
 
  return 0;
}