#include <stdio.h>

void menu2(int num)
{
	printf("\nResult:%d(%d-%d ounce or %d-%d grams)russet potato \n", num, 4 * num, 5 * num, 110 * num, 140 * num);
	printf("%d tbsp vegetable oil \n", 2 * num);
	printf("%.2f tbsp butter or margarine \n", ((float)1 / 2)*num);
}