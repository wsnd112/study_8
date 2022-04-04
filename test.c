#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct stu
{
	char name[20];
	int age;
}stu;
int main()
{
	stu s1 = { "zjl",20 };
	printf("%s\n",s1.name);
	return 0;
}