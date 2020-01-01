#include<stdio.h>
int main()
{
int i,j,temp,count,a[20]={12,65,1,41,25,23};
for(i=1;i<6;i++)
{
j=i-1;
temp=a[i];
while(temp<a[j] && j>=0)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}

for(i=0;i<6;i++)
{
printf("\t %d",a[i]);
}
return 0;
}
