#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


int main() {

	char character;
	printf("Please enter a character: ");
	scanf(" %c", &character);
	printf("ASCII value of %c = %d",character,character);
	
	return 0;
}