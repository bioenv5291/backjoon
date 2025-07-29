#include <stdio.h>

int main(void)
{
    int num,i,rnt_num;
    scanf("%d",&num);
    for(i=1;i<10;i++)
    {
        printf("%d * %d = %d\n",num,i,i*num);
    }
    return 0;
}
