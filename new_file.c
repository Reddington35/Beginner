#include<stdio.h>
#include <stdlib.h>
int numbers(int a,int b);
int main(){

    int number;
    int numberb;
    printf("Enter first value ");
    scanf("%d", &number);
    printf("Enter second value " );
    scanf("%d", &numberb);
    int result = numbers(number,numberb);
    printf("The Answer is %d",result);
    return 0;
}

int numbers(int num,int num2){
    int res = num  + num2;
    return res;
}
