#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void fibonacci(int num )
{
    int a, b, c, i = 3;
    a = 0;
    b = 1;
    if (num == 1)
        printf("%d", a);

    if (num >= 2)
        printf("%d\t%d", a, b);

    while (i <= num)
    {
        c = a + b;
        printf("\t%d", c);
        a = b;
        b = c;
        i++;
    }
    //num = 5, a = 0, b = 1, c = 1
    //0 1 1
    //a = 1, b = 1, c = 2
    //0 1 1 2
    //a = 1, b = 2, c = 3
    //0 1 1 2 3
}


int main() {
	
    int num;
    printf("Enter number of terms\t");
    scanf("%d", &num);
    fibonacci(num);


	getch();
	return 0;
}