#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size <= 0) {
		printf("Size of the array must be bigger than zero!\n");
		return 1;
	}

	int def_arr[size];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &def_arr[i]);

	int is_triple = 0;
	int fir_num = def_arr[0], sec_num = def_arr[1], third_num = def_arr[2];

	for(int i = 0; i < size; i++) {
		if(fir_num == sec_num && sec_num == third_num) {
			is_triple++;
			break;
		}
		else {
			fir_num = def_arr[i];
			sec_num = def_arr[i+1];
			third_num = def_arr[i+2];
		}
	}

	if(is_triple)
		printf("%d", 1);
	else
		printf("%d", 0);
	
	return 0;
}
