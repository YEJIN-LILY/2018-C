#include "���.h"

int main()
{
	//������ �����Ѵ�.
	char ch;
	float pound, inch, kilo, meter;

	printf("�� ���α׷��� ������ BMI������ �����մϴ�. \n");//���α׷��� �Ұ��Ѵ�.

	do {
		printf("�Ŀ��,��ġ(A) or ų�α׷�,����(B) �Է� ? ");
		ch = toupper(getchar()); //�Է¹��� ���ڸ� �빮�ڷ� ��ȯ�Ѵ�.
		while (getchar() != '\n');
		printf("\n");
	} while (ch != 'A' && ch != 'B'); //�Է¹��� ���ڰ� A �Ǵ� B�� �ƴ� ��� �ٽ� �Է¹޴´�.

	if (ch == 'A')
	{
		printf("������ ������(pound)�� Ű(inch)�� �Է��ϼ���:");
		scanf("%f%f", &pound, &inch);

		BMIP(pound, inch); //�Է¹��� ���ڰ� A�� ��� BMIP �Լ��� ȣ���Ѵ�.
	}

	if (ch == 'B')
	{
		printf("������ ������(kg)�� Ű(m)�� �Է��ϼ���:");
		scanf("%f%f", &kilo, &meter);

		BMIK(kilo, meter); //�Է¹��� ���ڰ� B�� ��� BMIK �Լ��� ȣ���Ѵ�.
	}

	return 0;
}



