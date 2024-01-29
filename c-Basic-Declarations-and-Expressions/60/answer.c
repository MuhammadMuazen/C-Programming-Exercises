#include <stdio.h>

enum weekdays {
	Sun = 0,
	Mon = 1,
	Tue = 2, 
	Wed = 3,
	Thu = 4,
	Fri = 5,
	Sat = 6,
};

int main(void) {

	printf("Sun = %d", Sun);
    	printf("\nMon = %d", Mon);
    	printf("\nTue = %d", Tue);
    	printf("\nWed = %d", Wed);
    	printf("\nThu = %d", Thu);
    	printf("\nFri = %d", Fri);
    	printf("\nSat = %d", Sat);
	
	return 0;
}

