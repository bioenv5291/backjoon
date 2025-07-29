#include<stdio.h>

int main(void){
    int a,b,i;
    scanf("%d %d",&a,&b);
    
    for(i=(a>b)?a:b;!(a%i==0&&b%i==0);i--);
    printf("%d\n",i);
    
    for(i=1;!(i%a==0&&i%b==0);i++);
    printf("%d",i);
        return 0;
}