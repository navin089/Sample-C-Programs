/*
If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.
*/
#include<stdio.h>
int main()
{
int num;
int r,sum=0,i,tmp,ts=0;
printf("\n Enter nu :\n");
scanf("%d",&num);
while(num > 0)
{
r =num%10;
tmp=r+1;
if(tmp==10)
tmp=0;
num=num/10;
sum=(sum*10)+tmp;
}
while(sum>0)
{
i=sum%10;
sum=sum/10;
ts=(ts*10)+i;
}
printf("\n Add of easch digit :%d\n",ts);
return 0;
}
