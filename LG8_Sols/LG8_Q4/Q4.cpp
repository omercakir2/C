#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ONE 450
#define TWO 900
#define THREE 150
#define DISCOUNT 0.15


int main(void) {
	//printf("MOVIE TICKET BOOKING\n--------------------\n1. Regular Ticket\n2. VIP Ticket\n3. Child Ticket (age 6-12)\n4. EXIT");
	int choice=0;
	char beforeDeadline;
	int age;
	double sum=0;
	double payment=0;
	while (choice != 4) {

		do
		{	
			printf("MOVIE TICKET BOOKING\n--------------------\n1. Regular Ticket\n2. VIP Ticket\n3. Child Ticket (age 6-12)\n4. EXIT\n");
			printf("Enter your choice:");
			scanf("%d",&choice);
		} while (choice<1 || choice>4);
		if (choice == 4) {
			printf("Sum : %.2f\n", sum);
		}
		else {

			printf("Is the booking done before the deadline? (y/n):");
			scanf(" %c", &beforeDeadline);
			if ( choice == 3 ) {
				printf("Enter age : ");
				scanf("%d", &age);
				if (age >= 6 && age <= 12) {
					if (beforeDeadline == 'y') {
						payment = (1.0 - DISCOUNT) * THREE;
					}
					else {
						payment = THREE;
					}
					printf("Payment is : %0.2f", payment);
				}
				if (age < 6) {
					printf("It's free !!\nPayment is : %0.2f",payment);
				}
				sum += payment;
			}
			else {
				if (choice == 1) {
					payment = ONE;
					if (beforeDeadline == 'y') {
						payment = (1 - DISCOUNT) * THREE;
					}
					else {
						payment = THREE;
					}
				}
				if (choice == 2) {
					payment = TWO;
					if (beforeDeadline == 'y') {
						payment = (1 - DISCOUNT) * THREE;
					}
					else {
						payment = THREE;
					}
				}
				printf("Payment is : %0.2f\n", payment);
				sum += payment;
			}
		}
		}
	

		
}