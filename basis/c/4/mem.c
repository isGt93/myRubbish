#include <stdio.h>
#include <string.h>
struct Gu{
	int a;//4 Byte
	char b;//1 Byte
	double c;//8 Byte
}gu;

int main()
{
	printf("%d\n",sizeof(gu));
	gu.a = 0;
	gu.b = 1;
	gu.c = 2.0;
	struct Gu gu2;
	gu2.a = 0;
	gu2.b = 1;
	gu2.c =2.0;
	
	int delta = memcmp(&gu,&gu2,sizeof(gu));	
	printf("delta=%d\n",delta);
	return 0;
}
