#include<stdio.h>

int main(void) {
	int a, b;
	int num[3], num1[3],num2[3];
	scanf("%d %d", &a, &b);
	num[0] = b / 100;
	num[1] = (b % 100) / 10;
	num[2] = b % 10;
	num1[0] = num[0] * a;
	num1[1] = num[1] * a;
	num1[2] = num[2] * a;
	printf("%d \n", num1[2]);
	printf("%d \n", num1[1]);
	printf("%d \n", num1[0]);
	num2[2] = num1[2];
	num2[1] = num1[1] * 10;
	num2[0] = num1[0] * 100;
	printf("%d\n", num2[0] + num2[1] + num2[2]);
	return 0;
}
