#include <stdio.h>

int main(void)
{
    int n,i,j,k;
    
    scanf("%d",&n);
    
    k=n;
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        
        for(j=0;j<2*(n-i)-1;j++)
        {
            printf("*");
        }

        
        
        printf("\n");
    }
    return 0;
   
}