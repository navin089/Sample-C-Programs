#include<stdio.h>
int minar(int a[],int n,int i);
int main()
{
int i,j,a[10],n,min,tmp;

printf("\n Enter no. of elements :\n");
scanf("%d",&n);
printf("\n Array elements atre :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
min=minar(a,n,i);
tmp=a[i];
a[i]=a[min];
a[min]=tmp;
}

printf("\n Sorted array is :\n");
for(j=0;j<n;j++)
{
printf("\t %d",a[j]);
}
return 0;
}
int minar(int a[],int n,int i)
{
int j,minn,max;
minn=a[i];
for(j=i+1;j<n;j++)
{
if(minn>a[j])
{
max=i;
}
}
return max;
}

