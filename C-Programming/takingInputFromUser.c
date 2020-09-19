#define	_CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX 100


int main() {
	int num;
	float decimalNum;
	char character;
	char text[MAX] ;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Enter a decimal number: ");
	scanf("%f", &decimalNum);

	printf("Enter a character: ");
	scanf(" %c", &character);

	//The fgets() function following the call to scanf() it is returning immediately having found a newline (that the scanf()left)
	//in the input stream.
	printf("Enter your first and last name: ");
	/* match up to newline */
	scanf("%*[^\n]");
	/* discard the newline */
	scanf("%*c");
	fgets(text, sizeof(text), stdin);

	printf("%d\n%.2f\n%c\n%s",num,decimalNum,character, text);

	printf("Please enter adress: ");
	gets(text);
	printf("%s",text);

	getch();
	return 0;
}