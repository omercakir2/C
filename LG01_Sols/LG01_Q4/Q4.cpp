#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 50
#define GAMES 4
int readFromFile(FILE *ptr, int *ids, int scores[][GAMES]) {
	if (ptr == NULL)return -1;
	int len = 0,id, score;
	while (fscanf(ptr, "%d",&id) != EOF) {
		*(ids + len) = id;
		for (int i = 0; i < GAMES; i++) {
			fscanf(ptr, "%d", &score);
			scores[len][i] = score;
		}
		len++;
	}
	return len;
}
void findTeamAvg(int arr[][GAMES], int num_teams,int *resarr) {
	int total = 0;
	for (int i = 0; i < num_teams; i++) {
		for (int j = 0; j < GAMES; j++) {
			total += arr[i][j];
		}
		resarr[i] = total / num_teams;
		total = 0;
	}
}
void findameAvg(int arr[][GAMES], int num_teams, int *resarr) {
	int total = 0;
	for (int i = 0; i < GAMES; i++) {
		for (int j = 0; j < num_teams; j++) {
			total += arr[i][j];
		}
		resarr[i] = total / num_teams;
		total = 0;
	}
}
void dispGameAvgs(int *ids,int *avgteam, int *avggames,int len_team, int len_game) {
	for (int i = 0; i < len_team; i++) {
		printf("%d\t\t%d\n", ids[i], avgteam[i]);
	}
	for (int i = 0; i < len_game; i++) {
		printf("%d\t\t%d\n", i+1, avggames[i]);
	}
}
int main(void) {
	FILE *ptr = fopen("dart.txt", "r");
	if (ptr == NULL)printf("Error!");
	else {
		int ids[MAX], scores[MAX][GAMES], avr_teams[MAX], avr_games[MAX];
		int len = readFromFile(ptr,ids,scores);
		findTeamAvg(scores, len, avr_teams);
		findameAvg(scores, len, avr_games);
		dispGameAvgs(ids, avr_teams, avr_games, len, GAMES);
	}
}