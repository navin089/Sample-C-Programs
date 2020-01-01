                                                           /*-----------TO FIND SUM OF DIGITS---------------*/
#include<stdio.h>
int main()
{
int num;
int sum=0,i,rem;
printf("\nEnter num :\n");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
sum+=rem;
num=num/10;
}
printf("\n Sum :%d",sum);
return 0;
}
