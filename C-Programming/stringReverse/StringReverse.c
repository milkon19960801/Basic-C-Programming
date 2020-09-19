#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE // for strrev().
#include<stdio.h>
#include <string.h>

int main() {
	int idxToDel = 0;
	char str[100];
	printf("Enter a string to reverse it: ");
	fgets(str, 100, stdin);
	strrev(str);
	memmove(&str[idxToDel], &str[idxToDel + 1], strlen(str) - idxToDel);// removing the \n left in the begining of the string.
	printf("The reversed string is: %s\n",str);

	char str1[1000], rev1[1000];
	int begin, end, count = 0;

	printf("Input a string\n");
	gets(str1);
	count = strlen(str1);	// Calculating string length

	end = count - 1;

	for (begin = 0; begin < count; begin++) {
		rev1[begin] = str1[end];
		end--;
	}

	rev1[begin] = '\0';

	printf("%s\n", rev1);



	getch();
	return 0;
}