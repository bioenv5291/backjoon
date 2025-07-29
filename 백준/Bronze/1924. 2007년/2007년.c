#include <stdio.h>

int main(void)
{
    int month[13],num,day,i,total=0;
    month[1]=31;
    month[2]=28;
    month[3]=31;
    month[4]=30;
    month[5]=31;
    month[6]=30;
    month[7]=31;
    month[8]=31;
    month[9]=30;
    month[10]=31;
    month[11]=30;
    month[12]=31;
    
    scanf("%d %d",&num,&day);
    
    for(i=1;i<num;i++)
    {
        total+=month[i];
    }
    total+=day;
    
    switch (total%7) {
        case 6:
            printf("SAT");
            break;
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
            }
    return 0;
}
