#include <stdio.h>
int main()
{
	char arr[3] = {1,2,3};
	*(arr + 4) = 10;
	printf("%d\n",arr[4]);
	return 0;
}
