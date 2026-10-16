#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("nhap a, b, c lan luot la: ");
    scanf("%d %d %d",&a,&b, &c);

    max=a;
    if(b>max) max=b;
    if(c>max) max=c;

    printf("%d", max);

  
  return 0;
}