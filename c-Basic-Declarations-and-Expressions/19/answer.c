#include <stdio.h>

int main(void){
	int p, q, r, s;

	printf("Input the first integer: ");
	scanf("%d", &p);
	printf("Input the second integer: ");
	scanf("%d", &q);
	printf("Input the third integer: ");
	scanf("%d", &r);
	printf("Input the fourth integer: ");
	scanf("%d", &s);

	int first_condition = 0;
	int second_condition = 0;

	if(p >= 0 && r >= 0 && s >= 0 && p % 2 == 0)
		first_condition++;
	if(q > r && s > p && r + s > p + q)
		second_condition++;

	if(first_condition && second_condition)
		printf("Correct values\n");
	else
		printf("Wrong values\n");

	return 0;
}
