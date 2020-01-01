#include<stdio.h>
#include<math.h>
int main()
{
int i,j,k,a[200][200],m,n,iter;
int counter=0,num;
printf("\n Enter 'N' for Pattern :");
scanf("%d",&n);
for(iter=n;iter>0;iter--)
{
if(iter!=1){
num=( iter * 2 ) - 1 ;//num=7
for(j=counter;j<num;j++)
{
a[j][num-1]=iter;//left part
a[num-1][j]=iter;//bottom part
}
//k=counter;
for(m=counter;m<num;m++)
{
a[m][counter]=iter;//right part
a[counter][m]=iter;//top part
}
counter++;
}
else
{
int s=n*2-1;
a[s/2][s/2]=1;
}
}

for(i=0;i<n*2-1;i++)
{
for(j=0;j<n*2-1;j++)
{
printf(" %d ",a[i][j]);
}
printf("\n");
}
return 0;
}

