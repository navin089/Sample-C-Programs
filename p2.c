                                           /*-------------TO CONVERT CELS INTO FARHET AND VICE-VERSA--------------------*/
#include<stdlib.h>
#include<stdio.h>
int main()
{
int ch;
float deg,fr;
looper:
printf("-------------Temperature Conversion Program-------------");
printf("\n1.To Celcius \n2.To Farahnheit\n3.Exit");
printf("\nEnter your choice :\n");
scanf("%d",&ch);


switch(ch)
{
case 1:
printf("Enter temp. in Farhanheit :\n");
scanf("%f",&fr);
deg=(fr-32)/1.8;
printf("\n Temp in Cels :%0.10f",deg);
break;

case 2:
printf("Enter temp. in Celsius :\n");
scanf("%f",&deg);
fr=(deg*1.8)+32;
printf("\n Temp in Farhr :%f",fr);
break;

case 3:
exit(0);
printf("\n you get Out of Me..");
break;
default :
printf("\n Wroong Choooiiise..");
}
printf("\nWant Another Trial ?");
scanf("%d",&ch);
if(ch=='y')
goto looper;
else
return 0;
return 0;
}
