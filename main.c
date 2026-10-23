#include <stdio.h>

int main() {
   double dtb;
   scanf("%lf",&dtb);
    if(9.0<=dtb<=10.0) printf("A");
    else if(9.0>dtb) printf("B+");
    else if(8.0>dtb) printf("B");
    else if(7.0>dtb) printf("C+");
    else if(6.5>dtb) printf("C");
    else if(5.5>dtb) printf("D+");
    else if(5.0<dtb) printf("D");
    else if(4.0<dtb) printf("F");
  return 0;
}