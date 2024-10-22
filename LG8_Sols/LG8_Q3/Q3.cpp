#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int counter = 0;
	char YesOrNo = 'y';
	while (counter < 3 && YesOrNo == 'y')

	{
		srand(time(NULL));
		int random_num = rand() % 4 +1 ;
		printf("%d",random_num);
		switch (random_num)
		{
		case 1:
			printf("Daily 1 GB Spotify\n");
			break;
		case 2:
			printf("Weekly 10 GB YouTube\n");
			break;
		case 3:
			printf("MONTHLY 1000 mins. call package, \n");
			break;
		case 4:
			printf("1 GB for 12 HOURS\n");
			break;
	
		}
		counter ++;
		if (counter < 3) {

			printf("Shake again? (y/n):");
			scanf(" %c", &YesOrNo);
		}

	}
}