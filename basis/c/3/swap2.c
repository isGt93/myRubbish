#include <stdio.h>
void swap(int* a,int *b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a = 100;
	int b = 200;
	swap(&a,&b);
	printf("a=%d\tb=%d\n",a,b);
	return 0;
}
