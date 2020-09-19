#define _CRT_SECURE_NO_WARNINGS
#define WINVER 0x0A00
#define _WIN32_WINNT 0x0A00
#include<stdio.h>
#include<ctype.h>

int main() {
	int number;
	char grade;
	printf("Please enter a number: ");
	scanf(" %d", &number);

	if (number < 100)
		printf("Number is less than 100!\n");
	else if (number > 100)
		printf("Number is greater than 100!\n");
	else
		printf("Number is 100!\n");

	printf("Please enter your grade: ");
	scanf(" %c", &grade);

	grade = toupper(grade);

	switch (grade)
	{
	case 'A': {
		printf("Excellent.\n");
		break;
		}
	case 'B': {
		printf("Keep it up!.\n");
		break;
	}
	case 'C': {
		printf("Well done!.\n");
		break;
	}
	case 'D': {
		printf("You passed!.\n");
		break;
	}
	case 'F': {
		printf("Better luck nest time.\n");
		break;
	}
	default:
		printf("Invalid grade.\n");
		break;
		
	}
	printf("Your grade is: %c\n", grade);


	/**********************************/
	/*check for vowel charachter*/
	char ch;
	printf("Please enter a character: ");
	scanf(" %c", &ch);
	ch = toupper(ch);
	switch (ch){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("%c is a vowel.\n", ch);
			break;
		default:
			printf("%c is not a vowel.\n", ch);
			break;
	}

	char vowels[] = { 'A','E','I','O','U' };
	char ch1;

	printf("Please enter a character: ");
	scanf(" %c", &ch1);
	ch1 = toupper(ch1);

	for (int i = 0; i < sizeof(vowels); i++) {
		if (ch1 == vowels[i]) 
			printf("%c is a vowel.\n", ch1);
	}

	printf("%c is not a vowel.\n", ch1);

	return 0;
}