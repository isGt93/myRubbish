#include <stdio.h>
int i = 0;
void gu1()
{
	for(int i = 0;i < 10;++i)
	{
		;
	}
	printf("i=%d\n",i);
}

void gu2()
{
	int i;
	for(i = 0;i < 10;++i)
	{
		;
	}
	printf("i=%d\n",i);
}

int main()
{
	gu1();
	gu2();
	return 0;
}
