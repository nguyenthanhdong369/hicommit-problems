#include <stdio.h>

int main() {
   double d;
   int t;
   if(d<=1){
     t=d*15000;}
   else if(d<=5){
     t=1*15000 + (d-1)*13000;}
   else{
     t=1*15000 + 4*13000 + (d-5)*11000;}
   printf("%ld",(long int)t); 
  return 0;
}