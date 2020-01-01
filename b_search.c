#include<stdio.h>
int main()
{
int l,h,i,mid,tar,a[6];
l=0;
h=5;
printf("\n Enter numbers :\n");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter target element :\n");
scanf("%d",&tar);
while(l!=h+1)
{
mid=(l+h)/2;
if(a[mid]==tar)
{
printf("\n Element %d found at %d ..",tar,mid+1);
break;
}
if(a[mid] > tar)
h=mid-1;
if(a[mid]<tar)
l=mid+1;
}
return 0;
}
