#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<ctype.h>


int MAX(int numArray[],int lenght) {
	int maxNum = 0;

	for (int i = 0; i <= lenght; i++){
		if (maxNum < numArray[i])
			maxNum = numArray[i];
	}
	return maxNum;
}
int MIN(int numArray[], int lenght) {
	int maxNum = 0;

	for (int i = 0; i <= lenght; i++) {
		if (maxNum < numArray[i])
			maxNum = numArray[i];
	}
	return maxNum;
}

int main() {
	/*****************************/
	/*Reversing a character case.*/
	char character,character1;

	printf("Please enter a character: ");
	scanf(" %c", &character);
	character1 = character;

	if (islower(character))
		character = toupper(character);
	else if (isupper(character))
		character = tolower(character);

	printf("Reverse case of \"%c\" is: %c\n",character1,character);
/**********************/
/*Max number in an array of numbers.*/
/*Min number in an array of numbers.*/

	int numsArray[6] = { 2,5,21,7,1,49 };

	int max = MAX(numsArray,6);
	int min = MIN(numsArray, 6);

	printf("The biggest number in the array is :%d\n", max);
	printf("The smallest number in the array is :%d\n", min);

	getch();
	return 0;
}