#include <stdio.h>

int main(void) { 

	int h1, h2, t;

	int rect = 0, hisi = 0;

	printf("Input two adjoined sides of the parallelogram:\n");
	scanf("%d%d", &h1, &h2);

	printf("Input the diagonal of the parallelogram:\n");
	scanf("%d", &t);

	if(t * t == h1 * h1 + h2 * h2)
		rect++;

	if(h1 == h2)
		hisi++;

	if (rect > 0)
    		printf("This is a rectangle\n");
  	if (hisi > 0)
    		printf("This is a rhombus\n");

	return 0;
}
