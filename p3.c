                                        /* ---------TO PERFORM SWAP OPERATION ON NUMBERS--------------------*/
#include<stdio.h>
int main()
{
int a,b,tmp;
printf("\Enter two inputs :\n");
scanf("%d %d",&a,&b);
printf("------Original Values---------\n");
printf("a :%d\n b :%d \n",a,b);
printf("----------After Interhanging-------------\n");
tmp=a;
a=b;
b=tmp;
printf("a :%d\n b :%d\n",a,b);
return 0;
}

