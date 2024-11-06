#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int findNumOfDigits(int number){
    int counter = 1;
    for(int i = 10;i<=number;i*=10){
        counter++;
        
    }
    printf("Number of digits is %d \n",counter);
    return counter;
}

int convertTo10base(int base, int number) {
	int sum = 0;
	int counter = 0;
	for (int i = 10; i <= number * 10; i *= 10) {
		int digit = number % i / (i / 10);
		sum += digit * pow(base,counter);
		counter++;
	}
	//printf("%d\n", sum);
	return sum;
}
int tenBasetoAnother(int base ,int number){
    int newnum = 0;
    for(int i = 0;number!=0;i++){//number%(i*base)!=0
        int digit = number%base;
        number = number/base;
        printf("Digit : %d\n",digit);
        newnum += (int)pow(10,i)*digit;
    }
    printf("New number in base of %d is %d\n",base,newnum);
    return newnum;
}

int main(void){
    
    int base;
    int number;
    do
    {
        printf("Enter the base and number respectively : ");
        scanf("%d %d",&base,&number);
        if(base>0 && (base>=2 && base <=9)){
            int newbase;
            do
            {
                printf("Enter the base to be converted :");
                scanf("%d",&newbase);
            } while (!(base>=2 && base <= 9));
            
            int tenbaseversion = convertTo10base(base,number);
            printf("The ten based version of %d  \n",tenbaseversion);
            printf("%d \n",tenBasetoAnother(newbase,tenbaseversion));
        }
    } while (base<0);
    
    //printf("The 210based8 is %dbased10 \n",convertTo10base(8,210));
    return 0;
}