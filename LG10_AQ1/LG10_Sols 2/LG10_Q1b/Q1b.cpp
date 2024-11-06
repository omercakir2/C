#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dispLine() {
	for (int i = 0; i < 10; i++) {
		printf("*");
	}
	printf("\n");
}
void dispBlank(int x) {
	for (int i = 0; i < x; i++) {
		printf(" ");
	}
}
void dispRectangle() {
	for (int i = 0; i < 4; i++) {
		dispLine();
	}
}
void dispParallelogram() {
	for (int i = 0; i < 4; i++) {
		dispBlank(i);
		dispLine();
	}
}
void menu() {
	printf("MENU\n1. Draw a single line\n2. Draw a rectangle\n3. Draw a parallelogram\n4. EXIT");
}
int main(void) {
	int choice=0;
	while (choice != 4) {
		do
		{
			menu();
			printf("Enter your choice : ");
			scanf("%d", &choice);

		} while (!(choice>=1 && choice<=4));
		switch (choice)
		{
		case 1:
				dispLine();
				break;
			case 2:
				dispRectangle();
				break;
			case 3:
				dispParallelogram();
		
		}
	}
}