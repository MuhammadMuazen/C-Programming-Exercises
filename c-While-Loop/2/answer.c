#include <stdio.h>

int main() {
	
	int num;

	while(1) {
		printf("Input a number (0 to exit): ");
		scanf("%d", &num);
		
		if(num == 0)
			break;
	}
	
	return 0;
}
