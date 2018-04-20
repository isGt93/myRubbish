#include <stdio.h>
void swap(int a,int b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("in swap &a=%p\t&b=%p\n",&a,&b);
}

int main()
{
	int a = 100;
	int b = 200;
	swap(a,b);
	printf("out swap &a=%p\t&b=%p\n",&a,&b);
	return 0;
}
