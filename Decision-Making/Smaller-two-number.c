#include<stdio.h>
int main(){
    int num1 , num2 , smaller;

    printf("Enter Two Numbers:");
    scanf("%d %d", &num1 , &num2);

    if (num1<num2){
        smaller=num1;
        printf("Smaller Number is: %d", smaller);
    }
    else{
        smaller=num2;
        printf("Smaller Numbere is: %d", smaller);
    }

    return 0;
}
