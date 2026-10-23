#include <stdio.h>

int main() {
   double dtb;
   scanf("%f",&dtb);
    if(dtb <4.0) printf("F");
    else if(4.0<=dtb<4.9) printf("D");
    else if(5.0<=dtb<5.4) printf("D+");
    else if(5.5<=dtb<6.4) printf("C");
    else if(6.5<=dtb<6.9) printf("C+");
    else if(7.0<=dtb<7.9) printf("B");
    else if(8.0<=dtb<8.9) printf("B+");
    else if(dtb>=9.0)  printf("A");
  return 0;
}