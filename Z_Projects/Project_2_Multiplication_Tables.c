#include<stdio.h>
#include<conio.h>

int main(){
    int num;
    printf("Enter the number to print table: ");
    scanf("%d", &num);

    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }

    getch();
    getch();

    return 0;
}