#include <stdio.h>
static int g_file = 10;
int gu()
{
	static int g_a = 0;
	int a = 0;
	for(int i = 0;i < 10;++i)
	{
		++g_a;
		++a;
	}
	printf("g_a=%d\ta=%d\n",g_a,a);
	return 0;
}

int main()
{
	gu();
	gu();
	printf("g_file=%d\n",g_file);
	return 0;
}
