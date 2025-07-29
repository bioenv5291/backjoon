#include <stdio.h>

int main(void)
{
    int hour,min,d,time,t_hour,t_min,t_sec;
    
    scanf("%d %d",&hour,&min);
    scanf("%d",&d);
    
    time = hour*60+min+d;
    
    while(time>23*60+59){
        time-=24*60;
    }
    t_hour=time/60;
    
    time-=t_hour*60;
    
    
    
    
    printf("%d %d",t_hour,time);
    
       return 0;
}