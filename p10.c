/*
A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.
*/

#include<stdio.h>
int main()
{
int hun=0,fif=0,ten=0,amt,chn=0,tmp=0;
printf("\n Enter amount to be withdrawal :\n");
scanf("%d",&amt);

hun=amt/100;
fif=amt%100;
if(fif%50 != 0)
{
ten=fif;
fif=(fif/10)*10;
fif=fif/50;
if(ten%50!=0)
{
ten=ten%50;
if(ten%10!=0)
{
chn=ten%10;
ten=ten/10;
}
else
{
ten=ten/10;
}
}
else
{
ten=ten/10;
}
}
printf("\nNo. of 100 :%d\nNo. of 50 :%d\nNo. of 10 :%d\nOnly Change :%d\n",hun,fif,ten,chn);
return 0;
}
