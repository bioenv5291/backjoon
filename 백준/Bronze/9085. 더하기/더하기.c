#include <stdio.h>

int main(void) {
	int T,N,A;
	int i=0;
	int j=0;
	int total=0;
	scanf("%d",&T);
	while(i<T){
		scanf("%d",&N);
			while(j<N){
				scanf("%d",&A);
				total+=A;
				j++;
			}
		printf("%d\n",total);
		i++;
		total=0;
		j=0;
			}
	return 0;
}
