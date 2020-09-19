#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int i = 0,j;
	int Numarray[3][5] = {
		{1,2,3,4,5},{0,6,7,8,9},{10,11,12,13,14} 
	};

	for (i; i < 10; i++) {
		printf("%d\n", i);
	}
	i = 0;

	while (i < 10) {
		printf("%d\n", i);
		i++;
	}
	do {
		printf("%d\n", i);
		i--;
	} while (i > 0);

	i = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d",Numarray[i][j]);
		printf("\n");
	}


	getch();
	return 0;
}