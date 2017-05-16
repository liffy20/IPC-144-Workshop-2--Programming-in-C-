// piggybank program workshop 2 IPC144
// name: Daniel Lifchitz
// student number:107719163
// Section: S
#include <stdio.h>



int main(void)

{



	float toonies;

	float loonies;

	float quarters;

	float dimes;

	float nickels;

	float pennies;

	float total , t2 ,t3;

	int d, e, f, g;



	printf("Please enter the number of coins in your piggy bank:\n");



	printf("Toonies: ");

	scanf("%f", &toonies);

	printf("Loonies: ");

	scanf("%f", &loonies);

	printf("Quarters: ");

	scanf("%f", &quarters);

	printf("Dimes: ");

	scanf("%f", &dimes);

	printf("Nickels: ");

	scanf("%f", &nickels);

	printf("Pennies: ");

	scanf("%f", &pennies);



	total = (toonies * 2) + (loonies * 1) + (quarters * 0.25) + (dimes * 0.1) + (nickels* 0.05) + (pennies * 0.01);



	printf("You have $%.2f in your piggy bank!\n", total);

	d = total / 50;
	e = (total - d * 50) / 20;
	f = (total - d * 50 - e * 20) / 10;
	g = (total - d * 50 - e * 20 - f * 10) / 5;
	t2 = d * 50 + e * 20 + f * 10 + g * 5;
	t3 = total - t2;

	printf("$50 bill: %d\n", d);
	printf("$20 bill: %d\n", e);
	printf("$10 bill: %d\n", f);
	printf("$5 bill: %d\n", g);


	printf("Change: $%.2f\n", t3);











		return 0;
}
