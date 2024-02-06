#include <stdio.h>

#define MAX_LEN 5

int main(void) {
	
	int arr[MAX_LEN];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < MAX_LEN; i++)
		scanf("%d", &arr[i]);

	printf("Elements of the original array: ");
	for(int i = 0; i < MAX_LEN; i++)
		printf("%d ", arr[i]);

	//reverse the array
	int rev_arr[MAX_LEN];

	for(int i = 0, j = MAX_LEN - 1; i < MAX_LEN, j >= 0; i++, j--)
		rev_arr[j] = arr[i];

	printf("\nElements of the reverse array: ");
	for(int i = 0; i < MAX_LEN; i++)
		printf("%d ", rev_arr[i]);

	return 0;
}
