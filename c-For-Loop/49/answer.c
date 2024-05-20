#include <stdio.h>

int main() {

	int start_num = 0, item_num = 0, common_diff = 0;
	int sum = 0;

	printf("Input the starting number of the A.P. series: ");
	scanf("%d", &start_num);
	printf("Input the number of items for the A.P. series: ");
	scanf("%d", &item_num);
	printf("Input the common difference of A.P. series: ");
	scanf("%d", &common_diff);

	printf("The Sum of the A.P. series are:\n");

	for (int i = 0; i < item_num; i++) {
        	if (i == item_num - 1)
            		printf("%d = ", start_num + (i * common_diff));
        	else
            		printf("%d + ", start_num + (i * common_diff));
        	sum += start_num + (i * common_diff);
    }

	printf("%d\n", sum);

	return 0;
}
