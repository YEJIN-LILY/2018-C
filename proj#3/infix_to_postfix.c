#include "���.h"



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
			postfix[p++] = ' '; //���ӵ� ���� ���ڿ��� �� ���� �� ������ �߰��Ѵ�.
		}
		else if (*infix == '+' || *infix == '-' || *infix == '*' || *infix == '/')
		{
			pr = pref(*infix);
			while (ctop > -1 && pr <= pref(charstack[ctop])) //�켱������ ���� �����ں��� ���� ����Ѵ�.
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
	while (ctop > -1) //���ÿ� �����ִ� �����ڵ��� ��� ����Ѵ�.
	{
		postfix[p++] = pop();
		postfix[p++] = ' ';
	}

	postfix[p] = '\0';
}