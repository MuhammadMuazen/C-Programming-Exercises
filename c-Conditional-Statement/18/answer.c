#include <stdio.h>

int main() {

	int cprice, sprice, plamt;

	printf("Input Cost Price: ");
	scanf("%d", &cprice);
	printf("Input Selling Price: ");
	scanf("%d", &sprice);

	if(sprice > cprice) {
		plamt = sprice - cprice;
		printf("\nYou can book your profit amount : %d\n", plamt);
	}
	else if(cprice > sprice) {
		plamt = cprice - sprice;
		printf("\nYou incurred a loss of amount : %d\n", plamt);
	}
	else
		printf("\nYou are in a no profit, no loss condition.\n");

	return 0;
}
