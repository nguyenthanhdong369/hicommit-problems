#include <stdio.h>

int main() {
  int d,m,y;
  scanf("%d %d %d", &d,&m,&y);
  if(y%400==0 || y%4==0 && y%100!=0){
       if(d==31){
          if(m==1 || m==3 || m==5 || m==7 || m==10 || m==12)
            printf("INVALID");
          else
            printf("VALID");
       }
       else if(d==30){
          if(m==4 || m==6 || m==9 || m==11 )
            printf("INVALID");
          else
            printf("VALID");
       }
       else if(d==29){
          if(m==2)
            printf("INVALID");
          else
            printf("VALID");
       }
  }
   else{
       if(d==31){
          if(m==1 || m==3 || m==5 || m==7 || m==10 || m==12)
            printf("INVALID");
          else
            printf("VALID");
       }
       else if(d==30){
          if(m==4 || m==6 || m==9 || m==11 )
            printf("INVALID");
          else
            printf("VALID");
       }
       else if(d==28){
          if(m==2)
            printf("INVALID");
          else
            printf("VALID");
        }
  }
  return 0;
}