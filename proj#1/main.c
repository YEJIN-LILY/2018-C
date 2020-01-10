#include "헤더.h"

int main()
{
	//변수를 선언한다.
	char ch;
	float pound, inch, kilo, meter;

	printf("이 프로그램은 귀하의 BMI지수를 측정합니다. \n");//프로그램을 소개한다.

	do {
		printf("파운드,인치(A) or 킬로그램,미터(B) 입력 ? ");
		ch = toupper(getchar()); //입력받은 문자를 대문자로 변환한다.
		while (getchar() != '\n');
		printf("\n");
	} while (ch != 'A' && ch != 'B'); //입력받은 문자가 A 또는 B가 아닐 경우 다시 입력받는다.

	if (ch == 'A')
	{
		printf("귀하의 몸무게(pound)와 키(inch)를 입력하세요:");
		scanf("%f%f", &pound, &inch);

		BMIP(pound, inch); //입력받은 문자가 A일 경우 BMIP 함수를 호출한다.
	}

	if (ch == 'B')
	{
		printf("귀하의 몸무게(kg)과 키(m)를 입력하세요:");
		scanf("%f%f", &kilo, &meter);

		BMIK(kilo, meter); //입력받은 문자가 B일 경우 BMIK 함수를 호출한다.
	}

	return 0;
}



