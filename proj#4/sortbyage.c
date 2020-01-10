#include "헤더.h"

void sortbyage(info *p)
{
	int i, j;
	info tmp;
	FILE *fp;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (p[j].age > p[j + 1].age)
			{
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
	fopen_s(&fp, "sortbyage.txt", "wt");
	fprintf(fp, "=================================================================================================\n");
	fprintf(fp, "이름     성별  나이 전화번호           학교         국어  영어  수학  과학   평균 \n");
	fprintf(fp, "=================================================================================================\n");

	for (i = 0; i < 10; i++)
		fprintf(fp, "%-10s %-3s %-3d %-15s %-15s %-5d %-5d %-5d %-5d %-5.2f \n", p[i].name, p[i].gender, p[i].age, p[i].telno, p[i].school, p[i].kor, p[i].eng, p[i].mat, p[i].sci, p[i].avg);
	fclose(fp);
	system("sortbyage.txt");
}