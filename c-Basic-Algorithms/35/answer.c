#include <stdio.h>

int main(void) {

	int size1, size2;

	printf("Input the size of the first array: ");
	scanf("%d", &size1);
	printf("Input the size of the second array: ");
	scanf("%d", &size2);

	if(size1 <= 0 || size2 <= 0) {
		printf("The sizes must be bigger than zero!\n");
		return 1;
	}

	int arr1[size1], arr2[size2];

	printf("Input the elements of the fisrt array:\n");
	for(int i = 0; i < size1; i++)
		scanf("%d", &arr1[i]);
	printf("Input the elements of the second array:\n");
	for(int i = 0; i < size2; i++)
		scanf("%d", &arr2[i]);
	
	if(arr1[0] == arr2[0] || arr1[size1 - 1] == arr2[size2 - 1])
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
