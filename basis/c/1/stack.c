#include <stdio.h>
int* gu()
{
	int a[3] = {1,2,3};
	int* pa = a;
	return pa;
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
	return 0;
}
