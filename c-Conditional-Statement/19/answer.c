#include <stdio.h>

int main() {

	int id;
	char name[128] = {0};
	double unit_consumed, charge = 0;

	printf("Input the customer ID: ");
	scanf("%d", &id);
	printf("Input the name of the customer: ");
	scanf("%s", name);
	printf("Input the unit consumed by the customer: ");
	scanf("%lf", &unit_consumed);

	if(unit_consumed < 199 && unit_consumed > 0)
		charge = 1.20;
	else if(unit_consumed >= 200 && unit_consumed < 400)
		charge = 1.50;
	else if(unit_consumed >= 400 && unit_consumed < 600)
		charge = 1.80;
	else if(unit_consumed >= 600)
		charge = 2.00;

	double bill = unit_consumed * charge;
	double subcharge = 0, last_bill = bill;

	if(bill > 400) {
		subcharge = bill * (15.00 / 100);
		last_bill = bill + (bill * (15.00 / 100));
	}

	
	printf("Customer IDNO: %d\n", id);
	printf("Customer Name: %s\n", name);
	printf("unit Consumed: %.2lf\n", unit_consumed);
	printf("Amount Charges @Rs. %.2lf per unit: %.2lf\n", charge, bill);
	printf("Surchage Amount: %.2lf\n", subcharge);
	printf("Net Amount Paid By the Customer: %.2lf", last_bill);

	return 0;
}



