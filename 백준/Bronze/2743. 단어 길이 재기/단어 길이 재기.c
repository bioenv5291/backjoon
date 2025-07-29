#include <stdio.h>

int main(void)
{
    int c,i=0;
    do{
            c=getchar();
            i++;
            

    }
    while(c!='\n');
        printf("%d",i-1);
       return 0;
}