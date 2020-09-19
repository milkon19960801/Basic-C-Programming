#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int numArr[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19},revNumArr[20];
	int  arrLen = sizeof(numArr) / sizeof(int), index = 0;

	for (int i = arrLen-1; i >= 0; i--) {
		revNumArr[index] = numArr[i];
		index++;
	}
	for (int i = 0; i < arrLen; i++){
		printf("Ordinary array[%d]: %d\tReversed array[%d]: %d\n",i,numArr[i], i, revNumArr[i]);
	}
	getch();
	return 0;
}