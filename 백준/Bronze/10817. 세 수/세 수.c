#include <stdio.h>

int main() {
    int x,y,z;
    int temp1;
    scanf("%d %d %d",&x,&y,&z);
    
    if(x>=y)
    {
        if(y>=z) temp1=y;
        else if (z>=x) temp1=x;
        else temp1=z;
        
    }
    else
    {   if(x>=z) temp1=x;
        else if (z>=y) temp1=y;
        else temp1=z;
    }
   
    printf ("%d",temp1);
    return 0;
    
}
