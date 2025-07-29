#include <stdio.h>

int main(void)
{
    int n,x,i;
    
    scanf("%d %d",&n,&x);
    
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i]<x) printf("%d ",arr[i]);
    }
    
    return 0;
}
