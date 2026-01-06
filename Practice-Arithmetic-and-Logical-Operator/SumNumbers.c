#include<stdio.h>
int main(){
    int num1 , num2 , num3;
    float sum;

    printf("Enter Three Numbers:");

    scanf("%d %d %d", &num1, &num2 , &num3);

    sum=(num1 + num2 + num3);
    printf("Total Sum: %2f", sum);


    return 0;
}
