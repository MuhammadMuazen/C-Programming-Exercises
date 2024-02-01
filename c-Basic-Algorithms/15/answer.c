#include <stdio.h>

int main(void) {

	int size;

	printf("Input the array size: ");
	scanf("%d", &size);

	if(size <= 0) {
		printf("The size of the array must be bigger than zero!");
		return 1;
	}
	
	int arr[size];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	int count = 0, one_time_true = 0;
	
	if(size == 1)
		printf("%d", 0);
	
	for (int i = 0; i < size - 1; i++) {
        	if (arr[i] == 5 && (arr[i + 1] == 5 || arr[i + 1] == 6)) {
            		count++;
			one_time_true++;
        	}
    	}

	if(one_time_true)
		count++;

	printf("The number of adjecent 5s are: %d\n", count);

	return 0;
}












