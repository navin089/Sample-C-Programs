#include<stdio.h>
//#include<conio,h>
int main()
{
int i,item,a[10],n;
printf("\n enter array elements");
for(i=0;i<10;i++)
{
scanf("\n%d",&a[i]);
}
printf("\n enter number to serach");
scanf("\n%d",&item);
for(i=0;i<10;i++)
{
if(item==a[i])
{
printf("\n element found at %d location",i);
break;
}
else
{
printf("\n element not found");
}
}
return 0;
}
