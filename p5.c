                                                /*TO REVERSE A GIVEN NUMBER */
#include<stdio.h>
int main()
{
int num;
int rev=0;
printf("\n Enter num :\n");
scanf("%d",&num);
while(num!=0)
{
rev=rev*10;
rev=rev+num%10;
num=num/10;
}
printf("\n Reversal :%d",rev);
return 0;
}
