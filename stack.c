/*-------------------------------- IMPLEMENTATION OF STACK PROBLEM----------------*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

const int SIZE=6;
int stk[SIZE],top=-1,el,i;
int ch,k;
char another='y';
while(another=='y')
{
printf("\n--------STACK OPERATION-----------\n");
printf("\n1. Push \n2. Pop \n3. Display \n4. Exit \n");
printf("\n Enter choice operation :");
scanf("%d",&ch);
switch(ch)
{
case 1:
	push();
	break;
case 2:
	pop();
	break;
case 3:
	display();
	break;
case 4:
	exit(0);
	break;
default:
	printf("\n Wrong Choice you've entered....");

printf("\nWant another :");
scanf("%c",&another);
}}
return 0;
}
void display()
{
 printf("\n-----------Given Stack----------\n");
        for(int i=0;i<=top;i++)
        {
        printf("\t %d",stk[i]);
        }
}
void push()
{
printf("\n Enter element to be pushed...");
        scanf("%d",&el);
        if(top==SIZE){
        printf("\n Stack is Overflowing....@@1!");
        }
        top++;
        stk[top]=el;
}
void pop()
{
if(top==-1){
        printf("\n Stack is Underflowing....@@1!");
        }
        stk[top--];

}
