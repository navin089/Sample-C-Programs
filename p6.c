                                        /*--------------ADDITION OF FIRST AND LAST DIGIT OF A NUMBER-----------------------*/
#include<stdio.h>
int main()
{
int n;
int fd=0,tmp,s,ld;
printf("\nEnter num :\n");
scanf("%d",&n);
ld=n%10;
while(n!=0)
{
tmp=n%10;
fd=tmp;
n=n/10;
}
printf("fd + ld :%d",fd+ld);
return 0;
}
