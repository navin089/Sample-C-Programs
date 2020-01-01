#include<stdio.h>
int main()
{
void insert(int a[],int n);
int number[20],i,j,count,temp;
printf("\nNo. Of elements :\n");
scanf("%d",&count);
for(i=0;i<count;i++)
scanf("%d",&number[i]);


// Implementation of insertion sort algorithm
   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp < number[j]) && (j>=0) ){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("Order of Sorted elements: \n");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
