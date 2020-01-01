#include<stdio.h>
#include<stdlib.h>
int main()
{
const int SIZE=7;
int front=0,rear=0,k,i,que[SIZE];
int ch;
char another='y';

while(another=='y')
{
printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
printf("\nenter your choice ....\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
	if(rear>SIZE-1)
	{
	printf("\nSorry...Queue is Full..!!");
	break;
	}
	printf("\n Enter to be Inserted..");
	scanf("%d",&k);
	que[rear]=k;
	rear++;
	break;
case 2:
	if(front>rear)
	{
	printf("\n Que is empty.....");
	break;
	}
	front++;
	break;
case 3:
	printf("\n The Queue in following way--------\n");
	for(i=front;i<rear;i++)
	{
	printf("\t %d",que[i]);
	}
	break;
case 4:
	exit(0);
	break;
default :
	printf("\n Wrong choice ...");
	break;
}
}
return 0;
}	
