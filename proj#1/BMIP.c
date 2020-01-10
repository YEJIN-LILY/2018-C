#include <stdio.h>

void BMIP(float pound, float inch)
{
	float BMIP;

	BMIP = (float)(pound * 703) / (inch*inch);

	printf("\nBMI VALUES \n");
	printf("Underweight: less than 18.5 \n");
	printf("Normal:      between 18.5 and 24.9 \n");
	printf("Overweight:  between 25 and 29.9 \n");
	printf("Obese:       30 or greater \n"); //BMI범위를 출력한다.

	if (BMIP < 18.5)
		printf("\nYour BMI is %.1f and you are Underweight \n", BMIP);
	else if (BMIP <= 18.5&&BMIP <= 24.9)
		printf("\nYour BMI is %.1f and you are Normal \n", BMIP);
	else if (BMIP <= 25 && BMIP <= 29.9)
		printf("\nYour BMI is %.1f and you are Overweight \n", BMIP);
	else
		printf("\nYour BMI is %.1f and you are Obese \n", BMIP); //BMI 지수에 따라 프린트문을 출력한다.
}