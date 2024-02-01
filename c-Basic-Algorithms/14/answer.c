#include <stdio.h>

int main(void) {

	int size;
	int ott[3] = {1, 2, 3};

	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size <= 0) {
		printf("Size of the array must be bigger than zero!\n");
		return 1;
	}

	if(size < 3) {
		printf("%d", 0);
		return 1;
	}

	int arr[size];
	
	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++) 
		scanf("%d", &arr[i]);

	int count = 0, seq_in_arr = 0;
	for(int i = 0; i < size; i++) {
		if(arr[i] == ott[count])
			count++;
		else if(arr[i] != ott[count])
			count = 0;
		
		if(count == 3) {
			seq_in_arr++;
			break;
		}
	}
	
	if(seq_in_arr)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
