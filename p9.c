                                                       /* E.X.C.E.R.C.I.S.E */

#include<stdio.h>
int main()
{
int r,sum,num,ld;
printf("\n Enter num :\n");
scanf("%d",&num);
ld=num%10;
while(num>0)
{
r=num%10;
sum=r;
num=num/10;
}
printf("\nSum is  :%d ",(ld+sum));
return 0;
}
