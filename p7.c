/*If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.*/


#include<stdio.h>
int main()
{
int profit,tsp;
int ppi;
printf("\n Enter Total selling price :\n");
scanf("%d",&tsp);
printf("\n Enter profit :\n");
scanf("%d",&profit);
ppi=(tsp+profit)/15;
printf("\n---------------PROUCT SUMMARY---------------------\n");
printf("\nCost Per Item :%d",ppi);
printf("\nTotal cost of items :%d",tsp);
printf("\nEarned Profit :%d",profit);
return 0;
}
