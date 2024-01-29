#include <stdio.h>

int main(void) {

	int in_arr[8];

	printf("Input heights(integer values) of the top eight buildings:\n");
	for(int i = 0; i < 8; i++) {
		scanf("%d", &in_arr[i]);
		if(in_arr[i] < 0 || in_arr[i] > 10000) {
			printf("0 <= height of building (integer) <= 10,000\n");
			return 1;
		}
	}
	
	int first = 0, second = 0, third = 0;

	for (int i = 0; i < 8; i++) {
        	if (in_arr[i] > first) {
            		third = second;
            		second = first;
            		first = in_arr[i];
		}
		else if (in_arr[i] > second) {
            		third = second;
            		second = in_arr[i];
        	}
		else if (in_arr[i] > third) {
            		third = in_arr[i];
		}
	}
	
	printf("Heights of the top three building:\n");
	printf("%d\n%d\n%d\n", first, second, third);

	return 0;
}
