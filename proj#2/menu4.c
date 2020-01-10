#include <stdio.h>

void menu4(int num)
{
	printf("\nResult:pizza crust dough \n", 8 * num);
	printf("%d sticks string cheese \n", 8 * num);
	printf("pizza sauce \n");
	printf("%d oz shredded mozzarella cheese \n", 6 * num);
	printf("%d oz pepperoni slices \n", 2 * num);
	printf("%d tbsp melted butter \n", num);
	printf("%.2f tsp garlic powder \n", ((float)1 / 4)*num);
}