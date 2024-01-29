#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

	srand(time(NULL));

	double random_num;
	char str;
	int num_of_nums = 0;

	FILE *rand_dat;

	rand_dat = fopen("./rand.dat", "w");

	//check if file exists
	if (rand_dat == NULL) {
        	fprintf(stderr, "Error opening file.\n");
        	return 1;
    	}
	
	fprintf(rand_dat, "%d\n", 50);

	register int i;
	for(i = 0; i < 50; i++) {
		int rand_int = rand();
		double rand_doub = (double)rand_int / RAND_MAX;
		random_num = (rand_doub - 0.5); 
		
		fprintf(rand_dat, "%.4lf\n", random_num);
		num_of_nums++;
	}

	fclose(rand_dat);

	//open the file for reading
	rand_dat = fopen("./rand.dat", "r");
	str = fgetc(rand_dat);

	while(str != EOF) {
		printf("%c", str);
		str = fgetc(rand_dat);
	}

	fclose(rand_dat);

	return 0;
}
