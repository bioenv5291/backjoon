#include <stdio.h>

int main(void)
{
    int hour,min,sec,d,time,t_hour,t_min,t_sec;
    
    scanf("%d %d %d",&hour,&min,&sec);
    scanf("%d",&d);
    
    time = hour*60*60+min*60+sec+d;
    
    while(time>23*60*60+59*60+59){
        time-=24*60*60;
    }
    t_hour=time/(60*60);
    
    time-=t_hour*60*60;
    
    t_min=time/60;
    
    time-=t_min*60;
    
    
    
    printf("%d %d %d",t_hour,t_min,time);
    
       return 0;
}