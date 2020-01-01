#include<stdio.h>
int main()
{
int a[7],i,j,k,tmp;
printf("\n Enter num to be Sorted......");
for(i=0;i<7;i++)
{
scanf("%d",&a[i]);
}
printf("\n Sorted Array is :\n");
for(i=0;i<7;i++)
{
for(j=0;j<7-i-1;j++)
{
if(a[j]>a[j+1])
{
tmp=a[j];
a[j]=a[j+1];
a[j+1]=tmp;
}
}
}
for(i=0;i<7;i++)
{
printf("\t %d",a[i]);
}
printf("\n");
return 0;
}
