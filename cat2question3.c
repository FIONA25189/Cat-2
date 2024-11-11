//program to excute the salary of a customer
/*
Name:Fiona Wanjiku
Regno:CT101/G/25189/24
*/
#include<stdio.h>
int main (){
  int hours_worked,overtime;
  float hourly_wage,grosspay,taxpay,netpay;
  printf("Input the hours worked in a week:");
  scanf("%d",&hours_worked);
  printf("The hours worked are %d\n",hours_worked);
  
  printf("Input the hourlywage:");
  scanf("%f",&hourly_wage);
  printf("The hourly wage is %f\n",hourly_wage);
  
  overtime=hours_worked-40;
  
   if(hours_worked>40){
     grosspay=(hourly_wage*40)+((hours_worked-40)*hourly_wage*0.5);
     printf("overtime!\n");}
   else if(hours_worked<=40){grosspay=(hours_worked*hourly_wage);
     printf("No overtime!!\n");}
   else {printf("No work done!!\n");}
   
   
   if (grosspay<=600){taxpay=0.15*grosspay;}
   else {taxpay=(600*0.15)+(grosspay-600)*0.20);}
  
   netpay=grosspay-taxpay;
   
   printf("The grosspay is %f\n",grosspay);
   printf("The taxpay is %f\n",taxpay);
   printf("The netpay is %f\n",netpay);
   
 return 0;
}
