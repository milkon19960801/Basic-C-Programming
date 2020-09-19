#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*The (num&1) is an bitwise operator that returns ture if the LSB(Least Significant Bit) of binary representation of an integer "num in this case" is 1,
It returns false if the LSB or the right most bit in a binart sequence is 0.*/

int main() {
	int num;
	printf("Please enter a number to check if its even or odd number: ");
	scanf("%d", &num);
	if (num & 1)
		printf("%d is odd.\n", num);
	else if (!(num & 1))
		printf("%d is even.\n", num);


	getch();
	return 0;
}