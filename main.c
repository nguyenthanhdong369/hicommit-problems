#include <stdio.h>

int main() {

  int khoangcach, order_value;

  printf("nhap khoang cach(km):\t ");
  scanf("%d", &khoangcach);

  printf("nhap gia hoa don:");
  scanf("%d", &order_value);

  if (khoangcach<=0 || order_value<=0) printf(" INVALID ");
  else if(order_value>=500000 && khoangcach<=15) printf("ban duoc mien phi");
  else if(khoangcach>=1 && khoangcach<=5) printf("phi giao hang la: %d", 15000);
  else if(khoangcach>=6 && khoangcach<=15) printf("phi giao hang la: %d", 25000);
  else if(khoangcach>15) printf("phi giao hang la: %d", 40000);
  
  return 0;
}