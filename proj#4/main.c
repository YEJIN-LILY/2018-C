#include "헤더.h"

int main()
{
	struct info info[MAX];
	char choice;
	FILE *f;
	struct info *p;
	int i;

	p = info;

	//파일을 읽는다
	f = fopen("input.txt", "r");

	if (f == NULL)
	{
		printf("File open error. \n");
		exit(0);
	}

	//파일을 읽으면서 각 배열에 저장한다
	for (i = 0; i < 10; i++)
	{
		fscanf(f, "%s %s %d %s %s %d %d %d %d", &info[i].name, &info[i].gender, &info[i].age, &info[i].telno, &info[i].school, &info[i].kor, &info[i].eng, &info[i].mat, &info[i].sci);
		info[i].avg = (float)(info[i].kor + info[i].eng + info[i].mat + info[i].sci) / 4;
	}

	fclose(f);

	//입력받은 문자가 조건에 맞지 않을 경우 반복수행한다
	do {
		printf("이름(1), 나이(2), 전화번호(3), 학교(4), 국어성적(5), 영어성적(6), 수학성적(7), 과학성적(8) 오름차순으로 정렬 ? \n");
		choice = getchar();
		while (getchar() != '\n');
	} while (choice<'1' || choice>'8');



	switch (choice)
	{
	case '1':
		sortbyname(p);
		break;
	case '2':
		sortbyage(p);
		break;
	case '3':
		sortbytelno(p);
		break;
	case '4':
		sortbyschool(p);
		break;
	case '5':
		sortbykor(p);
		break;
	case '6':
		sortbyeng(p);
		break;
	case '7':
		sortbymat(p);
		break;
	case '8':
		sortbysci(p);
		break;
	default:
		printf("1~8사이의 수를 입력하세요");
	}


	return 0;
}
