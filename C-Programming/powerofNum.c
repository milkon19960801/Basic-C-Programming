#define _crt_secure_no_warnings
#include<stdio.h>
#include<math.h>
int main() {
	double power, base, result;
	printf("enter the base number: ");
	scanf("%lf",&base);
	
	printf("enter the power raised: ");
	scanf("%lf",&power);

	result = pow(base, power);

	printf("\nresult: %.1lf^%.1lf = %.1lf\n", base, power, result);

	double power1, base1, result1;

	printf("enter the base number: ");
	scanf("%lf", &base1);

	printf("enter the power raised: ");
	scanf("%lf", &power1);
	result1 = base1;
	for (int i = 0; i < power1-1; i++) {
		result1 = base1 * result1;
		printf("%.1lf = %.1lf * %.1lf", result1, base1, result1);
	}
	printf("\nresult: %.1lf^%.1lf = %.1lf", base1, power1, result1);
	getch();
	return 0;
}