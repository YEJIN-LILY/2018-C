#include "���.h"

int main()
{
	char infix[MAX];
	double result;

	printf("�� ���α׷��� ������ ����մϴ�. \n");

	while (1)
	{
		printf("����� ������ �Է��ϼ���(=�� �Է��ϸ� ���α׷��� ����˴ϴ�.):");
		gets_s(infix, MAX);

		if (infix[0] == '=') //Ư�����ڰ� �ԷµǸ� ���α׷��� �����Ѵ�.
			exit(0);

		if (strlen(infix) == 1) //�Է¹��� ������ ������ 1���̸� �ݺ������Ѵ�.
			continue;

		infix_to_postfix(infix);


		result = calculate(postfix);

		printf("%s = %.2lf \n", infix, result);
	}

	return 0;
}