#include<stdio.h>

int main(void) {
	int burger[3], berverage[2], smallbur = 0, smallber=0;
	for (int i = 0; i < 3; i++)		scanf("%d", &burger[i]);
	for(int i=0;i<2;i++)	scanf("%d", &berverage[i]);
	if (burger[0] < burger[1]) smallbur = burger[0];
	else smallbur = burger[1];
	if (smallbur > burger[2]) smallbur = burger[2];
	if (berverage[0] < berverage[1]) smallber = berverage[0];
	else smallber = berverage[1];
	printf("%d", smallbur+smallber-50);
}
