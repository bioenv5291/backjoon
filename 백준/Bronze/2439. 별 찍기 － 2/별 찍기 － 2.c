#include<stdio.h>

int main(void){
   int a,b,c,d;
   scanf("%d",&a);
   
   for(b=1;b<=a;b++){
   	for(c=a;c>b;c--){
   		printf(" ");
   	}
   	for(d=1;d<=b;d++){
   		printf("*");
   	}
   	printf("\n");
   }
   return 0;
}