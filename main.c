#include <stdio.h>

int main() {
   double d;
   int t;
   if(d<=1)
     t=(int)d*15000;
   else if(d<=5)
     t=(int)1*15000 + (d-1)*13000
   else 
     t=(int)1*15000 + 4*13000 + (d-1)*11000
   printf("%d",t);
  return 0;
}