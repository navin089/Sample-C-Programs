#include<stdio.h>
int main()
{
int i,j,a;
printf("\nEnter num :\n");
scanf("%d",&a);
for(i=0;i<a;i++)
{
for(j=0;j<a;j++)
{
printf("#");
}
printf("\n");
}
return 0;
}