#include <stdio.h>
#define MAX 100

int dispMenu() {
    int choice;
    printf("1. Display Salaries\n2. Display Average Salaries\n3. Display Employee Info\n4. Exit");
    do
    {
        printf("Enter your choice : ");
        scanf("%d", &choice);
        if (!(choice >= 0 && choice <= 4))
            printf("Wrong choice ! \n");
    } while (choice<0 || choice >4);
    return choice;
}
void dispSalaries(int size , int *salaries,int *ids) {
    for (int i = 0; i < size; i++) {
        printf("%d %d\n", ids[i], salaries[i]);
    }
}
void dispAvrSal(char *genders,int size,int * salaries) {
    int m = 0;
    int f = 0;
    int cnt_m = 0;
    for (int i = 0; i < size; i++) {
        if (genders[i] == 'M') {
            m += salaries[i];
            cnt_m++;
        }
        else {
            f += salaries[i];
        }
    }
    printf("Average salary for males : %.2f\n", (float)m / cnt_m);
    printf("Average salary for females : %.2f\n", (float)f /(size-cnt_m));
    printf("Average salary for all %.2f: \n", (m+f) / (float)size);
}
int main(void) {
    FILE *ptr = fopen("employees.txt", "r");
    int ids[MAX];
    char genders[MAX];
    int ages[MAX];
    int salaries[MAX];
    if (ptr == NULL) {
        printf("Errror!");
    }
    else {
        int cnt = 0;
        while (fscanf(ptr, "%d %c %d %d", &ids[cnt], &genders[cnt], &ages[cnt] ,&salaries[cnt])!=EOF) {
            cnt++;
        }
        //dispMenu();
        dispSalaries(cnt,salaries,ids);
        dispAvrSal(genders,cnt,salaries);
    }



}