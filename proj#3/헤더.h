#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
#define _CRT_SECURE_NO_WARNINGS

char postfix[MAX], charstack[MAX];
extern int ctop, ftop;
double doublestack[MAX];
double calculate(char *postfix);

void infix_to_postfix(char *infix);
void charpush(char x);
void doublepush(double x);
char pop(void);
double fpop(void);
int pref(char x);
double calculate(char *postfix);
