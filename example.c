#include<stdio.h>
int main()
{
int i,j,k,a[100][100],s=0,n,row,column;
printf("\n Enter no of rows :\n");
scanf("%d",&row);
printf("\nEnter no o Columns :\n");
scanf("%d",&column);
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
a[i][j]=row-i;
}
}

for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
printf(" %d ",a[i][j]);
}
printf("\n\n");
}

return 0;
}
