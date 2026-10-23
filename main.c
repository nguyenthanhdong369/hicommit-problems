#include <stdio.h>

int main() {
   double dtb;
   scanf("%lf",&dtb);
    if( 9.0<=dtb && dtb<=10){ printf("A");}
    else if(9.0>dtb && dtb>=8.0) {printf("B+");}
    else if(8.0>dtb && dtb>=7.0) {printf("B");}
    else if(7.0>dtb && dtb>=6.5) {printf("C+");}
    else if(6.5>dtb && dtb>=5.5) {printf("C");}
    else if(5.5>dtb && dtb>=5.0) {printf("D+");}
    else if(5.0>dtb && dtb>=4.0) {printf("D");}
    else  {printf("F");}
  return 0;
}