#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* gu()
{
	int a[3] = {1,2,3};

	int* pa = (int*)malloc(sizeof(a));
	int* ret = pa;
	memset(pa,0,sizeof(a));
	for(int i = 0;i < sizeof(a)/sizeof(int);)
	{
		*pa = a[i++];
		pa++;
	}

	return ret;
}

int* foo()
{
	int b[3] = {4,5,6};
	int* pb = b;
	return pb;
}
int main()
{
	int* pa = gu();
	foo();
	printf("pa[0]=%d\n",pa[0]);
	free(pa);
	return 0;
}
