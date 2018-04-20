#include <stdio.h>
int main()
{
	int gu = 0x12345678;
	unsigned char* p_gu = (unsigned char*)&gu;

	printf("%x\n",p_gu[0]);
	printf("%x\n",p_gu[1]);
	printf("%x\n",p_gu[2]);
	printf("%x\n",p_gu[3]);
	return 0;
}
