#include <stdio.h>

int main(void) {

	int fn, sn;

	printf("Input the first number: ");
	scanf("%d", &fn);
	printf("Input the second number: ");
	scanf("%d", &sn);

	if(fn < 10 || fn > 99 || sn < 10 || sn > 99) {
		printf("The range of the numbers is [10-99]\n");
		return 1;
	}

	int fn_fd = fn / 10, fn_sd = fn % 10;
	int sn_fd = sn / 10, sn_sd = sn % 10;
	int is_condition = 0;

	if(fn_fd == sn_fd || fn_fd == sn_sd || fn_sd == sn_fd || fn_sd == sn_sd) 
		is_condition++;
	
	if(is_condition)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
