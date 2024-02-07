#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array (must be bigger than zero and odd: ");
	scanf("%d", &size);

	if(size % 2 == 0 || size < 1) {
		printf("size is invlaid!\n");
		return 1;
	}
	
	int arr[size];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	int first_ele = arr[0];
	int mid_ele = arr[size / 2];
	int last_ele = arr[size - 1];

	if(first_ele >= mid_ele && first_ele >= last_ele)
		printf("%d", first_ele);
	else if(mid_ele >= first_ele && mid_ele >= last_ele)
		printf("%d", mid_ele);
	else if(last_ele >= first_ele && last_ele >= mid_ele)
		printf("%d", last_ele);

	return 0;
}
