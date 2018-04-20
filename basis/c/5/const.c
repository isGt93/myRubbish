#include <stdio.h>

void copy1(char* des,const char* src,int len)
{
	for(int i = 0;i < len;++i)
		*des++ = *src++;
}
/*
void copy2(char* des,char* const src,int len)
{
	for(int i = 0;i < len;++i)
		*des++ = *src++;
}
*/

int main()
{
	char des[] = {4,5,6};
	char src[] = {1,2,3};

	copy1(des,src,3);
	printf("des[0]=%d\n",des[0]);

//	copy2(des,src,3);
//	printf("des[0]=%d\n",des[0]);

	return 0;
}
