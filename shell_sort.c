#include<stdio.h>
int main()
{
int i,k,j,gap,arr[20],num,tmp;
printf("\n Enter No. of elements :\n");
scanf("%d",&num);
printf("\n ENter Elements :\n");
for(i=0;i<num;i++)
scanf("%d",&arr[i]);

    for (i = num / 2; i > 0; i = i / 2)
     {
       for (j = i; j < num; j++)
            {
           for(k = j - i; k >= 0; k = k - i)
               { 
          if (arr[k+i] >= arr[k])
           break;
          else
              {

                    tmp = arr[k];

                    arr[k] = arr[k+i];

                    arr[k+i] = tmp;

              }
             }
            }
           }

printf("\n Sorted array is :\n");
for(i=0;i<num;i++)
printf("\t %d",arr[i]);
return 0;
}

