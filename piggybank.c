// piggybank program workshop 2 IPC144
// name: Daniel Lifchitz
// student number:107719163
// Section: S
#include <stdio.h>



int main(void)

{



	int toonies;

	int loonies;

	int quarters;

	int dimes;

	int nickels;

	int pennies;

	float total;



	printf("Please enter the number of coins in your piggy bank:\n");



	printf("Toonies: ");

	scanf("%d", &toonies);

	printf("Loonies: ");

	scanf("%d", &loonies);

	printf("Quarters: ");

	scanf("%d", &quarters);

	printf("Dimes: ");

	scanf("%d", &dimes);

	printf("Nickels: ");

	scanf("%d", &nickels);

	printf("Pennies: ");

	scanf("%d", &pennies);



	total = (toonies * 2) + (loonies * 1) + (quarters * 0.25) + (dimes * 0.1)+ (nickels *0.05) + (pennies * 0.01);



	printf("You have $%.2f in your piggy bank!\n", total);

	return 0;
}

