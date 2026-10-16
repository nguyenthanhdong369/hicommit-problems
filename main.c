#include <stdio.h>

int main() {
   int a;
   scanf("%d",&a);
  if(a%2==0) printf("CHAN");
  else if(a%2!=0) printf("LE");
  else if(a==0) printf("CHAN");
  return 0;
}