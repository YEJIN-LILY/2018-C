#include <stdio.h>

void menu1(int num)
{
	printf("\nResult:%d sliced Texas toast or thick cut bread \n", 6 * num);
	printf("%d large eggs \n", 2 * num);
	printf("%.2f cup milk or cream \n", ((float)1 / 4)*num);
	printf("%d tsp sugar \n", num);
	printf("%.2f tsp cinnamon \n", ((float)1 / 4)*num);
	printf("pinch of salt \n");
	printf("splash of vanilla extract \n");
	printf("butter and vegetable oil for cooking \n");
}