#include "헤더.h"



void infix_to_postfix(char *infix)
{
	int pr, p = 0;

	while (*infix != '\0')
	{
		if (*infix >= '0'&&*infix <= '9')
		{
			do {
				postfix[p++] = *infix++;
			} while ((*infix >= '0'&&*infix <= '9'));
			postfix[p++] = ' '; //연속된 숫자 문자열을 다 읽은 뒤 공백을 추가한다.
		}
		else if (*infix == '+' || *infix == '-' || *infix == '*' || *infix == '/')
		{
			pr = pref(*infix);
			while (ctop > -1 && pr <= pref(charstack[ctop])) //우선순위가 높은 연산자부터 먼저 출력한다.
			{
				postfix[p++] = pop();
				postfix[p++] = ' ';
			}
			charpush(*infix);
			infix++;
		}
		else
			infix++;

	}
	while (ctop > -1) //스택에 남아있는 연산자들을 모두 출력한다.
	{
		postfix[p++] = pop();
		postfix[p++] = ' ';
	}

	postfix[p] = '\0';
}