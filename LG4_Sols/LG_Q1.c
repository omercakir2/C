/*
Example Run #1:
Enter t and s: 1.7 2.8
Enter k and b: 5 4  
Result is: 0.25
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double t,s;
    int k,b;

    
    printf("Enter the t : ");
    scanf("%lf",&t);

    printf("Enter the s : ");
    scanf("%lf",&s);

    printf("Enter the k : ");
    scanf("%d",&k);

    printf("Enter the b : ");
    scanf("%d",&b);
    

    double res;

    res = fabs((sqrt(t*k)+4*b)/(b/sqrt(pow(2,t))-pow(s,k)/2+7));

    printf("Result is %0.2f",res);
    return 0;

}