#include <stdio.h>

int main() {

  int khoangcach, order_value;

  scanf("%d %d", &khoangcach, &order_value);


  if (khoangcach<=0 || order_value<=0) printf(" INVALID ");
  else if(order_value>=500000 && khoangcach<=15) printf("%d",0);
  else if(khoangcach>=1 && khoangcach<=5) printf("%d",15000);
  else if(khoangcach>=6 && khoangcach<=15) printf("%d",25000);
  else if(khoangcach>15) printf("%d",40000);
  
  return 0;
}