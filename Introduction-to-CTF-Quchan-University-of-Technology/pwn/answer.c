#include <stdio.h>

int main(){

	int total = 0;
	int cost = 80000000;

	total += cost;
	printf("%b,%d\n",total, total);
	int i = 1;
	for(; total > 0; i++){
		total += cost;
		printf("%b,%d\n",total, total);
	}
	printf("answer is %d\n", i);

}

