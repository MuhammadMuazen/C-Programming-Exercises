#include <stdio.h>

int main(void) {

	int array_n[5];

	printf("Input the 5 members of the array: \n");

	int j = 4;
	while(j >= 0) { 
		scanf("%d", &array_n[j]);
		j--;
	}


	register int i;
	for(i = 0; i < 5; i++)
		printf("array_n[%d] = %d\n", i, array_n[i]);

	return 0;
}
