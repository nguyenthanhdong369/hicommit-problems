#include <stdio.h>

int main() {
   double drl, dtb;
   scanf("%lf %lf",&drl,&dtb);
  if(dtb>=9.0 && drl>=90) printf("HOC_BONG_XUAT_SAC");
  else if(8.0<=dtb<9.0 && 80<=drl<90 || 8.0<=dtb<9.0 && drl>90 ||dtb>9.0 && 80<=drl<90) printf("HOC_BONG_GIOI");
  else if(7.0<=dtb<8.0 && 70<=drl<80 || 7.0<=dtb<8.0 && 80<=drl<90 || 7.0<=dtb<8.0 && drl>90) printf("HOC_BONG_KHA");
  else if(8.0<=dtb<9.0 && 70<drl<80  ) printf("HOC_BONG_KHA");
  else if(dtb>9.0 && 70<=drl<80)  printf("HOC_BONG_KHA");
  else printf("KHONG_DAT");
  return 0;
}