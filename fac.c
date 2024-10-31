#include <stdio.h>

double factoriel(double num){
    double sum=1;
    for(double j = num;j>0;j--){
        sum =j * sum;
    }
    return sum;
}

int helloworld(){
    printf("Hello World!");
    return 0;
}
int add(int a , int b){
    return a+b;
}
void show_sum(int a , int b){
    printf("The sum is : %d \n",a+b);
}
void draw_line(int x){
    for(int i = 0;i<x;i++)
        printf(" _ ");
    printf("\n");
}
void draw_square(int x){
    for(int i = 0;i<x;i++){
        draw_line(x);
        printf("\n");       
    }
}
void drawChar(int x , char c ){
    for(int i = 0 ; i < x ; i++)
        printf("%c",c);
}
int getInt(int first , int last){
    int x;
    do
    {
        printf("Enter the integer : ");
        scanf("%d",&x);
    } while (x<first || x>last);
    return x;
}
void drawTriangle(int h){
    for(int i = 0;i<h;i++){
        for(int j=0;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }

}
void drawPramid(int h){
    for(int i = 1 ; i <= h;i++){
        drawChar(i-1,' ');
        drawChar(i*2-1,'#');
        printf("\n");
    }
}
int main(void){
    //draw_square(5);
    //drawChar(3,'n');
    //int number = getInt(5,20);
    drawPramid(4);
    return 0;
}