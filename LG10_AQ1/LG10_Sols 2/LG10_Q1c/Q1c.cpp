#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dispLine(int x,char c) {
	for (int i = 0; i < x; i++) {
		printf("%c",c);
	}
	printf("\n");
}
void dispBlank(int x) {
	for (int i = 0; i < x; i++) {
		printf(" ");
	}
}
void dispRectangle(int x,char c) {
	for (int i = 0; i < x; i++) {
		dispLine(x,c);
	}
}
void dispParallelogram(int x, char c) {
	for (int i = 0; i < x ; i++) {
		dispBlank(i);
		dispLine(x,c);
	}
}
void menu() {
	printf("MENU\n1. Draw a single line\n2. Draw a rectangle\n3. Draw a parallelogram\n4. EXIT");
}
int main(void) {
	int choice = 0;
	while (choice != 4) {
		do
		{
			menu();
			printf("Enter your choice : ");
			scanf("%d", &choice);

		} while (!(choice >= 1 && choice <= 4));
		int x=0;
		char c=0;
		if (choice != 4) {
			printf("Enter number of symbols : ");
			scanf("%d", &x);
			printf("Enter the character : ");
			scanf(" %c", &c);

		}


		switch (choice)
		{
		case 1:
			dispLine(x,c);
			break;
		case 2:
			dispRectangle(x,c);
			break;
		case 3:
			dispParallelogram(x,c);

		}
	}
}