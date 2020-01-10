#include "헤더.h"


double calculate(char *postfix)
{
	double num, value, x, y;


	char *ptr = strtok(postfix, " ");

	while (ptr != NULL)
	{
		if (*ptr != '+'&&*ptr != '-'&&*ptr != '*'&&*ptr != '/')
		{
			num = atof(ptr); //문자를 숫자(실수)로 바꾼다.
			doublepush(num);
		}
		else
		{
			y = fpop();
			x = fpop();

			switch (*ptr)
			{
			case '+':value = x + y;
				break;
			case '-':value = x - y;
				break;
			case '*':value = x * y;
				break;
			case '/':value = x / y;
				break;
			}
			doublepush(value);
		}
		ptr = strtok(NULL, " ");
	}

	return fpop();
}
