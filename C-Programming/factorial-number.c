#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int factNum = 1, num;
    printf("Enter a number: ");
    scanf(" %d", &num);
    for (int i = 1; i <= num; i++){
        factNum = factNum * i;
    }
    printf("The factorial number of %d is: %d", num, factNum);

    getch();
    return 0;
}