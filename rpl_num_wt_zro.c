#include<stdio.h>
#include<math.h>
int convert(int num)
{
int digit;
if(num==0){ return 5; }
digit=num%10;
if(digit==0){ digit=5;}
return convert(num/10)*10+digit;
}
int main()
{
int num;
printf("\n Enter num :\n");
scanf("%d",&num);
printf("\n Result :%d",convert(num));
return 0;
}
