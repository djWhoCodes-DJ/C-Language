#include <stdio.h>
#include <conio.h>

int main(){
    int num1, num2;
    char dump, op;

    
    printf("Enter First Number: ");
    scanf("%d", &num1);
    dump = getchar();
    printf("Enter Operator: ");
    scanf("%c", &op);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    switch(op){
        case '+':
            printf("Sum = %d", num1+num2);
            break;
        case '-':
            printf("Difference = %d", num1-num2);
            break;
        case '*':
            printf("Multiplication = %d", num1*num2);
            break;
        case '/':
            printf("Division = %d", num1/num2);
            break;
        default : 
         printf("Invalid Operation");
    }

    return 0;
}