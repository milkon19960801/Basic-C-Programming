#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int eleCount, elesum= 0, eleVal;
	printf("Enter number of elements: ");
	scanf(" %d", &eleCount);
	for (int i = 1; i <= eleCount; i++){
		printf("Enter element %d:", i);
		scanf(" %d", &eleVal);
		elesum += eleVal;
	}
	printf("The element summery is %d.\nThe elements average value is: %d.", elesum, elesum / eleCount);
		
	getch();
	return 0;
}