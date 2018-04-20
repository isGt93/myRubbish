#include <stdio.h>
typedef struct Gu
{
	int age;
	char* name;
}Gu;


int main()
{
	Gu gu;
	gu.age = 10;
	gu.name = "hacker";

	printf("gu.age=%d\tgu.name=%s\n",gu.age,gu.name);
	return 0;
}
