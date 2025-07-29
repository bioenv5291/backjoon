#include<stdio.h>

int main(void){
	
	int num1, num2;
	
	scanf("%d %d", &num1, &num2);
	
	if(num1>0&&num2>0) printf("1");
	
	else if(num1>0&&num2<0) printf("4");
	
	else if(num1<0&&num2>0) printf("2");
	
	else printf("3");
	
	return 0;
}