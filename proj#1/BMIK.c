#include <stdio.h>

void BMIK(float kilo, float meter)
{
	float BMIK;

	BMIK = kilo / (meter*meter);

	printf("\nBMI VALUES \n");
	printf("Underweight: less than 18.5 \n");
	printf("Normal:      between 18.5 and 24.9 \n");
	printf("Overweight:  between 25 and 29.9 \n");
	printf("Obese:       30 or greater \n"); //BMI범위를 출력한다.

	if (BMIK < 18.5)
		printf("\nYour BMI is %.1f and you are Underweight \n", BMIK);
	else if (BMIK <= 18.5&&BMIK <= 24.9)
		printf("\nYour BMI is %.1f and you are Normal \n", BMIK);
	else if (BMIK <= 25 && BMIK <= 29.9)
		printf("\nYour BMI is %.1f and you are Overweight \n", BMIK);
	else
		printf("\nYour BMI is %.1f and you are Obese \n", BMIK); //BMI 지수에 따라 프린트문을 출력한다.
}
