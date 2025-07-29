#include<stdio.h>

int main(void) {
	int hour = 0, minute = 0, total = 0, temp = 0;

	scanf("%d %d", &hour, &minute);
	total =hour * 60+ minute;
	temp = total;
	//printf("%d", total);
	if (total < 45) total = (24 * 60) + temp - 45;
	else total = temp - 45;
//	printf("%d", total);
	printf("%d %d", total / 60, total % 60);
}
