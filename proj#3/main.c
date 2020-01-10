#include "헤더.h"

int main()
{
	char infix[MAX];
	double result;

	printf("이 프로그램은 수식을 계산합니다. \n");

	while (1)
	{
		printf("계산할 수식을 입력하세요(=을 입력하면 프로그램이 종료됩니다.):");
		gets_s(infix, MAX);

		if (infix[0] == '=') //특수문자가 입력되면 프로그램을 종료한다.
			exit(0);

		if (strlen(infix) == 1) //입력받은 문자의 갯수가 1개이면 반복수행한다.
			continue;

		infix_to_postfix(infix);


		result = calculate(postfix);

		printf("%s = %.2lf \n", infix, result);
	}

	return 0;
}