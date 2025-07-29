#include <stdio.h>

int main(void)
{
    int total[4],a,b,i;
    
    for(i=0;i<4;i++)
    {
        scanf("%d %d",&a,&b);
        if(i==0) total[i]=b-a;
        else total[i]=total[i-1]+b-a;
    }
    
    if(total[0]>total[1])
    {
        if(total[2]>total[3])
        {
            if(total[0]>total[2]) printf("%d",total[0]);
            else printf("%d",total[2]);
        }
        else {
            if(total[0]>total[3]) printf("%d",total[0]);
            else printf("%d",total[3]);
        }
    }
    else{
        if(total[2]>total[3])
        {
            if(total[1]>total[2]) printf("%d",total[1]);
            else printf("%d",total[2]);
        }
        else{
            if(total[1]>total[3]) printf("%d",total[1]);
            else printf("%d",total[3]);
        }
    }
          return 0;
}