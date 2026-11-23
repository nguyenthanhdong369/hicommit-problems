#include <stdio.h>
int main() {
  int d,m,y;
  scanf("%d %d %d",&d,&m,&y);
  if(y%400==0 || y%4==0 && y%100!=0){
       if( d>=1 && d<=29){
          if(m==1 || m==2 || m==3|| m==4 || m==5 || m==6 || m==7 || m==8 || m==9|| m==10 || m==11 || m==12)
            printf("VALID");
          else
            printf("INVALID");
       }
       else if(d>=1 && d<=30){
          if(m==1 || m==3|| m==4 || m==5 || m==6 || m==7 || m==8 || m==9|| m==10 || m==11 || m==12)
            printf("VALID");
          else
            printf("INVALID");
       }
       else if(d>=1 && d<=31){
         if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            printf("VALID");
          else
            printf("INVALID");
       }
       else printf("INVALID");
   }
   else{
       if( d>=1 && d<=28){
          if(m==1 || m==2 || m==3|| m==4 || m==5 || m==6 || m==7 || m==8 || m==9|| m==10 || m==11 || m==12)
            printf("VALID");
          else
            printf("INVALID");
       }
       else if(d>=1 && d<=30){
          if(m==1 || m==3|| m==4 || m==5 || m==6 || m==7 || m==8 || m==9|| m==10 || m==11 || m==12)
            printf("VALID");
          else
            printf("INVALID");
       }
       else if(d>=1 && d<=31){
         if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            printf("VALID");
          else
            printf("INVALID");
       }
       else printf("INVALID");
   }
  return 0;
}