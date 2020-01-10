#include "헤더.h"

int main()
{
	//변수를 선언한다
	int num;
	char menu;

	printf("이 프로그램은 다음 메뉴의 레시피를 제공합니다. \n"); //프로그램의 기능을 소개한다

	//입력받은 문자가 조건에 맞지 않을 경우 반복한다
	do
	{
		printf("\nfrench toast(1),hash browns(2),turkey meatloaf(3),pepperoni pizza(4) ? ");
		menu = getchar();
		while (getchar() != '\n'); //입력버퍼를 비운다

		switch (menu)
		{
		case '1':printf("\nInsert Food Name: French Toast \n");
			printf("How many people: ");
			scanf("%d", &num);
			menu1(num);
			system("start https://www.youtube.com/watch?v=r1ZLSbQ0r0I");
			break;
		case '2':printf("\nInsert Food Name: Hash Browns \n");
			printf("How many people: ");
			scanf("%d", &num);
			menu2(num);
			system("start https://www.youtube.com/watch?v=7xDmCLP5mhY");
			break;
		case '3':printf("\nInsert Food Name: Turkey Meatloaf \n");
			printf("How many people: ");
			scanf("%d", &num);
			menu3(num);
			system("start https://www.youtube.com/watch?v=byZj4mfOJ2s");
			break;
		case '4':printf("\nInsert Food Name: Pepperoni Pizza \n");
			printf("How many people: ");
			scanf("%d", &num);
			menu4(num);
			system("start https://www.youtube.com/watch?v=lgg6luYfQ1w");
			break;
		default:
			printf("1~4 사이의 수를 입력하세요 \n");
		}
	} while (menu != '1'&&menu != '2'&&menu != '3'&&menu != '4');

	return 0;
}
