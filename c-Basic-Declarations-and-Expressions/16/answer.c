#include <stdio.h>

int main(void){
	
	int amount;
	int notes[7] = {0};

	printf("Input the amount: ");
	scanf("%d", &amount);
	
	while(amount > 0){
		if(amount >= 100){
			amount -= 100;
			notes[0] += 1;
		}
		else if(amount >= 50 && amount < 100){
			amount -= 50;
			notes[1] += 1;
		}
		else if(amount >= 20 && amount < 50){
			amount -= 20;
			notes[2] += 1;
		}
		else if(amount >= 10 && amount < 20){
			amount -= 10;
			notes[3] += 1;
		}
		else if(amount >= 5 && amount < 10){
			amount -= 5;
			notes[4] += 1;
		}
		else if(amount >= 2 && amount < 5){
			amount -= 2;
			notes[5] += 1;
		}
		else if(amount == 1){
			amount -= 1;
			notes[6] += 1;
		}

	}

	printf("%d Note(s) of 100.00\n", notes[0]);
	printf("%d Note(s) of 50.00\n", notes[1]);
	printf("%d Note(s) of 20.00\n", notes[2]);
	printf("%d Note(s) of 10.00\n", notes[3]);
	printf("%d Note(s) of 5.00\n", notes[4]);
	printf("%d Note(s) of 2.00\n", notes[5]);
	printf("%d Note(s) of 1.00\n", notes[6]);

	return 0;
}
