#include <stdio.h>

int main(void) {
	int test;
	scanf("%d",&test);
	if(test<=100 && test>=90)
		printf("A\n");
	else if(test>=80)
		printf("B\n");
	else if(test>=70)
		printf("C\n");
	else if(test>=60)
		printf("D\n");
	else if(test<60)
		printf("F\n");
	return 0;
}
