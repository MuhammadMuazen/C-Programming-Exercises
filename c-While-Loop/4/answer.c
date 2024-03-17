#include <stdio.h>
#include <stdlib.h>

int main() {

	int size = 0;
	int *arr_num = NULL;
	
	int num;

	while(1) {
		
		printf("Input a number: ");
		scanf("%d", &num);
		
		arr_num = realloc(arr_num, (size + 1) * sizeof(int));
		arr_num[size++] = num;

		int c = 0;
		int count = 0;

		while(count < size) {
			if(arr_num[count] == num)
				c++;
			count++;
		}

		if(c > 1) {
			printf("You Entered a Duplicate Number!!\n");
			break;
		}
	}

	free(arr_num);

	return 0;
}
			
			
