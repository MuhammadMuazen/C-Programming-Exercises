#include <stdio.h>

int main(void){
	
	char emp_id[10];
	int working_hours, salary_per_hour;

	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%10s", &emp_id);
	printf("Input the working hrs: ");
	scanf("%d", &working_hours);
	printf("Salary amount/hr: ");
	scanf("%d", &salary_per_hour);
	
	int full_salary = working_hours * salary_per_hour;

	printf("Employee ID = %s\n", emp_id);
	printf("Salary = U$ %.2f", (float)full_salary);

	return 0;
}
