#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10],n,i,j,tmp,min;
printf("\n Enter No of Elements :\n");
scanf("%d",&n);
printf("\nElement nums :\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
min=j;
}
if(min!=i)
{
tmp=a[i];
a[i]=a[min];
a[min]=tmp;
}
}

printf("\nSorted array is :\n");
for(i=0;i<n;i++)
{
printf("\t %d",a[i]);
}
}
