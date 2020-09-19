#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	int num,revNum = 0,palindrome;
	printf("Enter a number: ");
	scanf("%d", &num);
	palindrome = num;
	while (num != 0){
		revNum = revNum * 10;
		revNum = revNum + num%10;
		num = num / 10;
	}
	printf("Reverse of the number: %d\n", revNum);
	if (revNum == palindrome)
		printf("The number is a palindrome number.\n");
	else 
		printf("The number is not a palindrome number.\n");


	getch();
	return 0;
}