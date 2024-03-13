#include <stdio.h>

int main(void) {
	
	int no, phy_mark, chem_mark, com_app_mark;
	char name[100];

	printf("Input the Roll Number of the student: ");
	scanf("%d", &no);
	printf("Input the Name of the Student: ");
	scanf("%s", name);
	printf("Input the marks of Physics, Chemistry and Computer Application:\n");
	scanf("%d%d%d", &phy_mark, &chem_mark, &com_app_mark);

	int total_marks = phy_mark + chem_mark + com_app_mark;
	double percentage = (double)total_marks / 3;

	printf("Roll No %d\n", no);
	printf("Name of Student: %s\n", name);
	printf("Marks in Physics: %d\n", phy_mark);
	printf("Marks in Chemistry: %d\n", chem_mark);
	printf("Marks in Computer Application: %d\n", com_app_mark);
	printf("Total Marks: %d\n", total_marks);
	printf("Percentage: %.2lf\n", percentage);
	if(percentage >= 80.0)
		printf("Division = First\n");
	else if(percentage < 80.0 && percentage >= 60.0)
		printf("Division = Second\n");
	else if(percentage < 60.0 && percentage >= 40)
		printf("Division = Third\n");
	else
		printf("Division = Last\n");

	return 0;
}
