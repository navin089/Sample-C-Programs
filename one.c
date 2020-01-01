#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    
    
    char ch[1000];
    int i=0;

    int temp[10]={0};

    scanf("%[^\n]%*c",ch);

    while(ch[i]!='\0')
    {
    if(ch[i]>=48 && ch[i]<=57)
    {
       
        
        
        switch(ch[i])
        {
            case '0': temp[0]++;
            break;
             case '1': temp[1]++;
            break;
             case '2': temp[2]++;
            break;
             case '3': temp[3]++;
            break;
             case '4': temp[4]++;
            break;
             case '5': temp[5]++;
            break;
             case '6': temp[6]++;
            break;
             case '7': temp[7]++;
            break;
             case '8': temp[8]++;
            break;
            case '9': temp[9]++;
            break;
            }  
    }
    i++;
    }

 
   for(i=0;i<10;i++)
    printf("%d ",temp[i]);
    

    return 0;
}
