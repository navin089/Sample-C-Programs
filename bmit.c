#include<stdio.h>
int main()
{

int a[100][100],len,n,i,j,k;
int counter=0;
scanf("%d",&n);
for(k=n;k>0;k++)
{
len=k*2-1;
if(k!=1)
{
for(j=counter;j<len;j++)
{
a[len-1][j]=k;//right
a[j][len-1]=k;//left
}
for(i=len-1;i>counter;i--)
{
a[counter][len-1]=k;//
a[len-1][counter]=k;
}
counter++;
}
else
{
int s=len/2;
a[s][s]=1;
}
}

for(i=0;i<n*2-1;i++)
{
for(j=0;j<n*2-1;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
return 0;
}
