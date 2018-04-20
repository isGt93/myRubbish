#include <stdio.h>
int main()
{
	char* pstr = "abc";
	char a[] = {'a','b','c','\0'};
	char* pa = a;

	printf("pstr[0]=%c\tpstr=%s\n",pstr[0],pstr);
	printf("pa[0]=%c\tpa=%s\n",pa[0],pa);

	return 0;
}
