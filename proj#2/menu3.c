#include <stdio.h>

void menu3(int num)
{
	printf("\nResult:%d g ground turkey(stay away from the rolls) \n", 450 * num);
	printf("%d g dry breadcrumbs(or use crushed crackers,croutons,stuffing mix,etc) \n", 80 * num);
	printf("%d tbsp dried minced onion \n", 2 * num);
	printf("%.2f ml milk \n", ((float)1 / 2)*num);
	printf("%d egg,beaten \n", 180 * num);
	printf("%d tsp soy sauce \n", num);
	printf("%.2f tsp seasoned pepper \n", ((float)1 / 2)*num);
	printf("black pepper to taste \n");
}