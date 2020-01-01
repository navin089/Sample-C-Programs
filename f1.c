#include<stdio.h>
#include<string.h>
int main()
{
FILE *fp,*fs;
char ch;
int noc=0;

fp=fopen("menu","r");
fs=fopen("down.txt","w");
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
fputc(ch,fs);
}
fclose(fp);
fclose(fs);
printf("\n No of  Chars : %d ",noc);
return 0;
}
