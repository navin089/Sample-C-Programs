#include<stdio.h>
int main()
{
int n,i,j,a[20],arr[100];
printf("\n Enter no. of elements :\n");
scanf("%d",&n);
printf("\n Enter ele :\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
arr[i]=1;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
continue;
else
arr[i]*=a[j];
}
}
printf("\n Arrrrrayyy is :\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
return 0;
}
