#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define _CRT_SECURE_NO_WARNINGS

struct info {
	char name[MAX];
	char gender[MAX];
	int age;
	char telno[MAX];
	char school[MAX];
	int kor, eng, mat, sci;
	float avg;
};

typedef struct info info;


void sortbyname(info *p);
void sortbyage(info *p);
void sortbytelno(info *p);
void sortbyschool(info *p);
void sortbykor(info *p);
void sortbyeng(info *p);
void sortbymat(info *p);
void sortbysci(info *p);