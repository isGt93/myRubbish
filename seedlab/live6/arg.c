#include <stdio.h>
#include <stdarg.h>
int myprint(int Narg,...)
{
	va_list ap;
	int i;
	va_start(ap,Narg);

	for(i = 0;i < Narg;i++)
	{
		//printf("%d ",va_arg(ap,int));
		printf("%f ",va_arg(ap,double));
	}
	printf("\n");
	va_end(ap);
}

int main()
{
	myprint(1,2,3.5);
	myprint(2,3,4.5,4,5,6,7,8,9,10,11,12,13,14,15,5.5);
	return 1;
}
